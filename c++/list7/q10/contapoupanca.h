#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "conta.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ContaPoupanca : public Conta {
public:
ContaPoupanca(int c, string nome , int saldop, string data= "22/11/2022") : Conta(c, nome, saldop) {niver = data;}

virtual void depositar(double n) { saldo += n; }
virtual void retirada(double n) { saldo -= n; }
virtual void extrato() {
  cout << "Conta Poupança"<< endl;
  cout << "O numero da conta é: " << this->numConta << endl
       << "O nome do(a) dono(a) dela é: " << this->NomeC << endl
       << "O saldo é: " << this->saldo << endl
       << "O aniversario da conta é: "<< niver << endl;
}
private:
string niver;
};

#endif