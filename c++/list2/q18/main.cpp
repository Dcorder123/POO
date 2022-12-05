#include <iostream>
#include "Empregado.h"
using namespace std;

int main() {
    string nome, nome2, sobrenome, sobrenome2;
    double salario, salario2;

    cout << "Digite o nome do empregado: ";
    cin >> nome;

    cout << "Digite o sobrenome do empregado: ";
    cin >> sobrenome;
    
    cout << "Digite o salário do empregado: ";
    cin >> salario;

    Empregado empregadoTeste1(nome, sobrenome, salario);
    empregadoTeste1.displayMessage();

    cout << "Digite o nome do empregado2: ";
    cin >> nome2;

    cout << "Digite o sobrenome do empregado2: ";
    cin >> sobrenome2;

    cout << "Digite o salário do empregado2: ";
    cin >> salario2;

    Empregado empregadoTeste2(nome2, sobrenome2, salario2);
    empregadoTeste2.displayMessage();

    
  return 0;
}