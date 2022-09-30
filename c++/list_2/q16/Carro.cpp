#include <iostream>
using std::cout, std::endl;

#include "Carro.h"

//Implementação

Carro::Carro(string nome)
{ //modificação 1
  setMarca(nome);
}

void Carro::setMarca(string nome)
{ //modificação 2
  if (nome == "")
    marca = "\"Sem Marca\"";
  else if (nome.length() > 10)
    marca = nome.substr(0,10);
  else
    marca = nome;
}

void Carro::setAno(int ano){

    
    if (ano > 0)
        ano = ano;
    else if (ano <= 0)
        ano = 0;
}

string Carro::getMarca()
{
  return marca;
}

int Carro::getAno()
{
  return ano;
}

void Carro::displayMessage()
{
    std::cout << "Olá, eu sou um carro da marca " << getMarca() << endl;
    std::cout << "Meu ano é " << getAno() << endl;
}
