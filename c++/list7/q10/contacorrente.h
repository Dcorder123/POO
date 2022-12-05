#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENT_H

#include "conta.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ContaCorrente : public Conta {
public:
ContaCorrente(int numContac, string NomeCc, int saldoc) : Conta(numContac, NomeCc, saldoc) {}

virtual void depositar(double n) { saldo += n; }
virtual void retirada(double n) { saldo -= n; }
virtual void extrato() {
  cout <<"Conta Corrente"<<endl;
  cout << "O numero da conta é: " << this->numConta << endl
       << "O nome do(a) dono(a) dela é: " << this->NomeC << endl
       << "O saldo é: " << this->saldo << endl;
  }
};

#endif