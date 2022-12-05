#ifndef CONTA_LIMITE_H
#define CONTA_LIMITE_H

#include "conta.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ContaLimite : public Conta {

public:
ContaLimite(int c , string nome , int saldol, double limite_h= 1200) : Conta(c, nome, saldol) {limite = limite_h;}

virtual void depositar(double n) { saldo += n; }
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
  cout <<"Conta Corrente Limite"<<endl;
  cout << "O numero da conta é: " << this->numConta << endl
       << "O nome do(a) dono(a) dela é: " << this->NomeC << endl
       << "O saldo é: " << this->saldo <<endl<<"e o seu limite é: "<<limite<< endl;
}
private:
double limite;
};

#endif