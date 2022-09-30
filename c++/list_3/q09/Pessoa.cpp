#include <iostream>
using std::cout;
using std::endl;
#include <string>

#include "Pessoa.h"

//Implementação

PESSOA::PESSOA(string name1, int cpf1) {
  setName(name1);
  setcpf(cpf1);
}

void PESSOA::setName(string name1) {
  name = name1;
}

void PESSOA::setcpf(int cpf1) {
    
  
  cpf = cpf1;
}