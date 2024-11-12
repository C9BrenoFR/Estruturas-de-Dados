#include "No.h"
#include "iostream"

using namespace std;

No::No(){
    info = 0;
    prox = nullptr;
}
No::No(int val){
    info = val;
    prox = nullptr;
}

No::No(int val, No *p){
    info = val;
    prox = p;
}
No::~No(){
    cout << "No destruido" << endl;
}

int No::obterInfo(){
    return info;
}

No* No::obterProx(){
    return prox;
}

void No::setProximo(No *p){
    prox = p;
}