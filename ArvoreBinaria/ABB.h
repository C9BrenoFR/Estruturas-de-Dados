
#include "NoABB.cpp"
#include <iostream>
#include <string>
using namespace std;


class ABB {
    public:
        ABB();
        ~ABB();
        void insere(int chave);
        void remove(int chave);
        NoABB *buscar(int chave);

        bool   vazia();
        void  imprimePreOrdem();
        void  imprimeEmOrdem();
        void  imprimePosOrdem();
        void  imprimeArvore();

        int segundoMaior();
        int menorElemento();
        int numeroDeFolhas();
        int somaDaArvore();
        int contaMaioresQue(int chave);

    private:
        NoABB *raiz;


        NoABB *sucessor(NoABB *no);
        NoABB *antecessor(NoABB *no);
        NoABB* remove(NoABB *raiz, int chave);
        void   destruir(NoABB *raiz);
        void   imprimePreOrdem(NoABB *raiz);
        void   imprimeEmOrdem(NoABB *raiz);
        void   imprimePosOrdem(NoABB *raiz);
        void   imprimeArvore(NoABB *raiz, string prefixo, bool esquerda);

        NoABB* segundoMaior(NoABB *raiz);
        void numeroDeFolhas(NoABB *raiz, int &contador);
        int somaDaArvore(NoABB* raiz);
        int contaMaioresQue(int chave, NoABB* raiz);
};
