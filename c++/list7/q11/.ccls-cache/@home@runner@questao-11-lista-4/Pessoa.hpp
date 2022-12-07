#ifndef PESSOA
#define PESSOA
#include <string>
#include <iostream>
using namespace std;

class Pessoa{

public:
  Pessoa(string nome,string endereco,string email) : nome(nome),endereco(endereco),email(email) {}
  virtual void pesquisar(string) = 0;

protected:
  string nome;
  string endereco;
  string email;
};


#endif