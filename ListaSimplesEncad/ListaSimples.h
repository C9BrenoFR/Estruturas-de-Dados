#include "No.cpp"

class ListaSimples
{
private:
    No *primeiro;
public:
    ListaSimples();
    ~ListaSimples();
    bool vazia();
    No* getPrimeiro();
    No* getUltimo();
    void inserirPrimeiro(int val);
    void inserir(int val);
    void remover(int val);
    void exibir();
    bool buscar(int val);
};
