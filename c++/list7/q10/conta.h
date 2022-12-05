#ifndef CONTA_H
#define CONTA_H 

#include <string>

using std::string;

//classe abstrata
class Conta{
public:

Conta(int n,string c,double s) : numConta(n),NomeC(c),saldo(s){ }


virtual void depositar(double n) = 0;

virtual void retirada(double n) = 0;

virtual void extrato() = 0;

protected:
int numConta;
string NomeC;
double saldo;
};

#endif