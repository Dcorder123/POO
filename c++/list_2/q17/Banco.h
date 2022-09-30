#ifndef BANCO_H
#define BANCO_H

#include <string>
using std::string;

//Interface
class Banco
{
    public:
        Banco(string);
        void setNome(string);
        void setAgencia(int);
        void setConta(int);
        void setSaldo(double);
        void debitar(double);
        void creditar(double);
        string getNome();
        int getAgencia();
        int getConta();
        double getSaldo();
        void displayMessage();
    private:
        string nome;
        int agencia;
        int conta;
        double saldo;
}; // fim da classe Banco

#endif