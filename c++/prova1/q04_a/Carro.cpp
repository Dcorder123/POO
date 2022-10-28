#include <iostream>
using std::cout, std::endl;

#include "Carro.h"

//Implementação

Carro::Carro(string marca1,int ano,string nome)
{ //modificação 1
  setProprietario(nome);
  setMarca(marca1);
  setAno(ano);
}

void Carro::setMarca(string marca1)
{ //modificação 2
  if (marca1 == "")
    marca = "\"Sem Marca\"";
  else
    marca = marca1;
}

void Carro::setAno(int ano1){ 
    if (ano1 > 0)
        ano = ano1;
    else if (ano1 <= 0)
        ano = 0;
}

void Carro::setProprietario(string nome1){
  if (nome1 == ""){
    proprietario = "\"Sem Proprietario\"";
  }
  else{
    proprietario = nome1;
    } 
}

string Carro::getProprietario(){
  return proprietario;
}

void Carro::displayMessage()
{
    std::cout << "Olá, eu sou um carro da marca " << getMarca() << endl;
    std::cout << "Meu ano é " << getAno() << endl;
    std::cout << "Meu proprietário é " << getProprietario() << endl;
    
}
