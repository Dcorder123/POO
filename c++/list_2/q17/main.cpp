#include <iostream>
using std::cout, std::endl, std::cin;

#include "Banco.h"

int main() {
    int agencia, conta;
    double saldo, debitar, creditar;
    string nome;

    cout << "Digite o nome do cliente: ";
    cin >> nome;
    cout << "Digite o número da agência: ";
    cin >> agencia; 
    cout << "Digite o número da conta: ";
    cin >> conta; 
    cout << "Digite o saldo: ";
    cin >> saldo;
    cout << "Digite o valor a ser debitado: ";
    cin >> debitar;
    cout << "Digite o valor a ser creditado: ";
    cin >> creditar;

    Banco bancoTeste1(nome);
    bancoTeste1.setAgencia(agencia);
    bancoTeste1.setConta(conta);
    bancoTeste1.setSaldo(saldo);
    bancoTeste1.debitar(debitar);
    bancoTeste1.creditar(creditar);
    bancoTeste1.displayMessage();
  return 0;
}