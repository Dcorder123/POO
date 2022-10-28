#include <iostream>
#include <string>
#include "Pessoa.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main ()
{
    string nome;
    int idade, altura;
    cout << "Digite o nome: ";
    getline(cin, nome);
    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Digite a altura: ";
    cin >> altura;
    Pessoa p1(nome, idade, altura);
    p1.imprime();
    cout << endl;
    Pessoa p2("Joao", 20, 180);
    p2.imprime();
    cout << endl;
    Pessoa p3("Maria", 18, 160);
    p3.imprime();
    cout << endl;
    return 0;
}