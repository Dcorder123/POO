#include <iostream>
using namespace std;

#include "Banco.h"
//Implementação

Banco::Banco(string nome)
{ //modificação 1
  setNome(nome);
}

void Banco::setNome(string nome1)
{ //modificação 2
  if (nome1 == ""){
    nome = "\"Sem Nome\"";
  }
  else if (nome1.length() > 10){
    nome = nome1.substr(0,10);
  }
  else{
    nome = nome1;
  };
}

void Banco::setAgencia(int agencia1){
  if (agencia1 > 0){
    agencia = agencia1;
  }
  else if (agencia1 <= 0){
    agencia = 0;
  }
}

void Banco::setConta(int conta1){
  if (conta1 > 0){
    conta = conta1;
  }
  else if (conta1 <= 0){
    conta = 0000;
  }
}

void Banco::setSaldo(double saldo1){
  
  if (saldo1 >= 0){
    saldo = saldo1;
  }
  else {
    cout << "Saldo inválido" << endl;
    saldo = 0;
  }
}

void Banco::debitar(double debitar){
  if (saldo >= debitar){
    saldo -= debitar;
  }
  else {
    cout << "Saldo insuficiente" << endl;
  }
}

void Banco::creditar(double creditar){
  if (saldo >= creditar){
    saldo += creditar;
  }
  else {
    cout << "Não tem como creditar negativo" << endl;
  }
}


string Banco::getNome()
{
  return nome;
}

int Banco::getAgencia()
{
  return agencia;
}

int Banco::getConta()
{
  return conta;
}

double Banco::getSaldo()
{
  return saldo;
}


void Banco::displayMessage()
{
    std::cout << "Olá banco do nome é " << getNome() << endl;
    std::cout << "Minha agência é " << getAgencia() << endl;
    std::cout << "Minha conta é " << getConta() << endl;
    std::cout << "Meu saldo é " << getSaldo() << endl;
}