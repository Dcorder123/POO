#ifndef CONTA_LIMITE_H
#define CONTA_LIMITE_H

#include "conta.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ContaLimite : public Conta {

public:
ContaLimite(int c , string nome , int saldol, double limite_h= 1200) : Conta(c, nome, saldol) {
  limite = limite_h;
  tipo = "Conta Limite";
  }

virtual void retirada(double n) {
  if(saldo >n){
    saldo -= n; 
    }else{
      double l=n-saldo;
      limite-=l;
      saldo=0;
    }
}
virtual void extrato() {
        cout << "O tipo da conta é: " << this->tipo << endl;
        cout<< "O número da conta é: " << this->numConta << endl;
        cout<< "O nome do titular é: " << this->NomeC << endl;
        cout<< "O saldo é: " << this->saldo << endl;
        cout<< "O limite é: " << this->limite << endl;
        cout << endl;
    }

private:
double limite;
};

#endif