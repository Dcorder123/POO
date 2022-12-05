#ifndef CONTA_H
#define CONTA_H

class Conta {
public:
    Conta();
    Conta(int numero, double saldo);
    void setNumero(int numero);
    void setSaldo(double saldo);
    int getNumero();
    virtual double getSaldo();
    void depositar(double valor);
    void sacar(double valor);
};