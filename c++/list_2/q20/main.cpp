#include <iostream>
#include <string>
#include "Cupom.h"

using namespace std;

int main() {
    string id, descricao;
    float preco;
    int quantidade;

    cout << "Digite o id: ";
    getline(cin, id);

    cout << "Digite a descrição: ";
    getline(cin, descricao);

    cout << "Digite o preço: ";
    cin >> preco;

    cout << "Digite a quantidade: ";
    cin >> quantidade;

    Cupom cupom(id, descricao, preco, quantidade);
    cupom.mostrarCupom();
    
    return 0;
}