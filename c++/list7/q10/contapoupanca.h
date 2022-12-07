#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "conta.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ContaPoupanca : public Conta {
public:
ContaPoupanca(int c, string nome , int saldop, string data= "22/11/2022") : Conta(c, nome, saldop) {
  niver = data;
  tipo = "Conta Poupança";}

virtual void extrato() {
        cout << "O tipo da conta é: " << this->tipo << endl;
        cout<< "O número da conta é: " << this->numConta << endl;
        cout<< "O nome do titular é: " << this->NomeC << endl;
        cout<< "O saldo é: " << this->saldo << endl;
        cout<< "A data de aniversário é: " << this->niver << endl;
        cout << endl;
    }

private:
string niver;
};

#endif