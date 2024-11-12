#include <iostream>
#include <string>
#include "Node.h"

using namespace std;


template <class T>

Node<T>::Node(T val, Node<T>* p){
    info = val;
    next = p;
}

template <class T>

T Node<T>::getInfo(){
    return info;
}

template <class T>

Node<T>* Node<T>::getNext(){
    return next;
}

template <class T>

void Node<T>::setInfo(T val){
    info = val;
}

template <class T>

void Node<T>::setNext(Node<T>* p){
    next = p;
}

template <class T>

Node<T>::~Node(){

}