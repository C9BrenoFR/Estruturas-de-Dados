#include <iostream>
#include "ListaSimples.cpp"

void menu();

int main(){
    menu();
    return 0;
}

void menu(){
    ListaSimples lista = ListaSimples();
    cout << "Bem vindo ao menu" << endl;
    cout << "O que deseja fazer?" << endl;

    int opcao;
    int teclado;
    do{
    cout << "0 - Sair" << endl;
    cout << "1 - Inserir valor" << endl;
    cout << "2 - Remover valor da lista" << endl;
    cout << "3 - Exibir lista" << endl;
    cout << "4 - Buscar valor" << endl;
    cin >> opcao;

    switch(opcao){
        case 0:
            break;
        case 1:
            cout << "Digite o valor a ser inserido: ";
            cin >> teclado;
            lista.inserir(teclado);
            break;
        case 2:
            cout << "Digite o valor a ser removido: ";
            cin >> teclado;
            lista.remover(teclado);
            break;
        case 3:
            lista.exibir();
            break;
        case 4:
            cout << "Digite o valor a ser buscado: ";
            cin >> teclado;
            if(lista.buscar(teclado))
                cout << "Valor encontrado" << endl;
            else
                cout << "Valor nao encontrado" << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
    }
    }while(opcao != 0);

    cout << "Saindo..." << endl;
}