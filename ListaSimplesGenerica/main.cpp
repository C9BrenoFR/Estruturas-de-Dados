#include <iostream>
#include "List.cpp"
#include <string>

using namespace std;

void menu();

int main(){

    menu();

    return 0;
}

void menu(){
    List<string> list = List<string>();

    cout << "Bem vindo ao menu" << endl;
    cout << "O que deseja fazer?" << endl;

    int option;
    string insert = string();
    do{
    cout << "0 - Sair" << endl;
    cout << "1 - Inserir valor" << endl;
    cout << "2 - Remover valor da lista" << endl;
    cout << "3 - Exibir lista" << endl;
    cout << "4 - Buscar valor" << endl;
    cin >> option;

    switch(option){
        case 0:
            break;
        case 1:
            cout << "Digite o valor a ser inserido: ";
            cin >> insert;
            list.insert(insert);
            break;
        case 2:
            cout << "Digite o valor a ser removido: ";
            cin >> insert;
            list.remove(insert);
            break;
        case 3:
            list.show();
            break;
        case 4:
            cout << "Digite o valor a ser buscado: ";
            cin >> insert;
            if(list.search(insert))
                cout << "Valor encontrado" << endl;
            else
                cout << "Valor nao encontrado" << endl;
            break;
        default:
            cout << "opção invalida" << endl;
    }
    }while(option != 0);

    cout << "Saindo..." << endl;
}