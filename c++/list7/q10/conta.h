#ifndef CONTA_H
#define CONTA_H 

#include <string>

using std::string;
using std::cout;
using std::endl;


//classe abstrata
class Conta{
public:

    Conta(int n,string c,double s) : numConta(n),NomeC(c),saldo(s){ }


    void depositar(double n) { saldo += n; }
    virtual void retirada(double n) { saldo -= n; }

    virtual void extrato() {
        cout << "O tipo da conta é: " << this->tipo << endl;
        cout<< "O número da conta é: " << this->numConta << endl;
        cout<< "O nome do titular é: " << this->NomeC << endl;
        cout<< "O saldo é: " << this->saldo << endl;
        cout << endl;
    }

    void transferencia(Conta &c, double n) {
        this->retirada(n);
        c.depositar(n);
    }

protected:
    int numConta;
    string NomeC;
    double saldo;
    string tipo;

};

#endif