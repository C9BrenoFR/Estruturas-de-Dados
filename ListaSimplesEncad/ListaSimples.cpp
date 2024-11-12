#include "ListaSimples.h"

using namespace std;

ListaSimples::ListaSimples(){
    primeiro = nullptr;
}

ListaSimples::~ListaSimples(){
    cout << "Deletando Lista";
}

bool ListaSimples::vazia(){
    return (primeiro == nullptr);
}

No* ListaSimples::getPrimeiro(){
    return primeiro;
}

No* ListaSimples::getUltimo(){
    No *aux = primeiro;
    while(aux->obterProx() != nullptr)
        aux = aux->obterProx();
    return aux;
}

void ListaSimples::inserirPrimeiro(int val){
    if(this->vazia())
        primeiro = new No(val);
    else{
        No *novo = new No(val, primeiro);
        primeiro = novo;
    }
}

void ListaSimples::inserir(int val){
    if(this->vazia()){
        this->inserirPrimeiro(val);
        return;
    }
    No* novo = new No(val);
    No* ultimo = this->getUltimo();
    ultimo->setProximo(novo);
}

void ListaSimples::remover(int val){
    if(this->vazia()){
        cout << "Lista vazia" << endl;
        return;
    }
    
    No* aux = primeiro;
    No* ant = nullptr;
    while(aux->obterInfo() != val ){
        ant = aux;
        aux = aux->obterProx();
    }

    if(aux == nullptr){
        cout << "A lista não possui esse valor" << endl;
        return;
    }

    if(aux == primeiro){
        primeiro = aux->obterProx();
        delete aux;
    }else{
        ant->setProximo(aux->obterProx());
        delete aux;
    }
}

void ListaSimples::exibir(){
    No *atual = primeiro;
    int i = 1;
    while(atual != nullptr){
        cout << i++ << " valor: " << atual->obterInfo() << endl;
        atual = atual->obterProx();
    }
}

bool ListaSimples::buscar(int val){
    No* atual = primeiro;
    while (atual != nullptr)
    {
        if(atual->obterInfo() == val)
            return true;
        atual = atual->obterProx();
    }
    return false;
    
}