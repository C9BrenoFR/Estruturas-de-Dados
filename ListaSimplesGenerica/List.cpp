#include <iostream>
#include <string>
#include "List.h"

using namespace std;

template <class T>

List<T>::List(){
    first = nullptr;
}

template <class T>

bool List<T>::isEmpty(){
    return (first == nullptr);
}

template <class T>

Node<T>* List<T>::getFirst(){
    return first;
}
   
template <class T>

Node<T>* List<T>::getLast(){
    if(this->isEmpty())
        return nullptr;

    Node<T>* aux = first;
    while (aux->getNext() != nullptr)
        aux = aux->getNext();
    
    return aux;
}

template <class T>

void List<T>::insertFirst(T val){
    if(this->isEmpty()){
        first = new Node<T>(val);
        return;
    }
    Node<T>* newNode = new Node<T>(val, first);
    first = newNode;
}

template <class T>

void List<T>::insert(T val){
    if(this->isEmpty()){
        this->insertFirst(val);
        return;
    }
    Node<T>* newNode = new Node<T>(val);
    Node<T>* last = this->getLast();
    last->setNext(newNode);
}

template <class T>

void List<T>::show(){
    if (this->isEmpty())
    {
        cout << "A lista está vazia.";
        return;
    }

    Node<T>* aux = first;

    cout << "Os valores sao: ";

    while (aux != nullptr)
    {
        cout << aux->getInfo() << " ";
        aux = aux->getNext();
    }
    cout << endl;
}

template <class T>

bool List<T>::search(T val){
    Node<T>* aux = first;
    while (aux != nullptr)
    {
        if(aux->getInfo() == val)
            return true;
        aux = aux->getNext();
    }
    return false;
}


template <class T>

void List<T>::remove(T val){
    if(this->isEmpty()){
        cout << "Lista vazia" << endl;
        return;
    }
    
    if(!this->search(val)){
        cout << "A lista não possui esse valor" << endl;
        return;
    }

    Node<T>* aux = first;
    Node<T>* ant = nullptr;
    while(aux->getInfo() != val ){
        ant = aux;
        aux = aux->getNext();
    }

    if(aux == first){
        first = aux->getNext();
        delete aux;
    }else{
        ant->setNext(aux->getNext());
        delete aux;
    }
}

template <class T>

List<T>::~List(){

}