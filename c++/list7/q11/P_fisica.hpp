#ifndef PESSOAF
#define PESSOAF

#include "Pessoa.hpp"

class Pfisica : public Pessoa{

public:
  Pfisica(string nome,string endereco,string email,string CPF,string dataNascimento,string estadoCivil) : Pessoa(nome,endereco,email),CPF(CPF),dataNascimento(dataNascimento), estadoCivil(estadoCivil) {}
  Pfisica();

   // Gets

  string getNome(){return nome;}
  string getEndereco(){return endereco;}
  string getEmail(){return email;}
  string getCPF(){return CPF;}
  string getNasc(){return dataNascimento;}
  string getCivil(){return estadoCivil;}

  // Sets

  void setNome(string x){nome = x;}
  void setEndereco(string x){endereco = x;}
  void setEmail(string x){email = x;}
  void setCPF(string x){CPF = x;}
  void setNasc(string x){dataNascimento = x;}
  void setCivil(string x){estadoCivil = x;}

  void operator=(Pfisica);
  
  virtual void pesquisar(string);
private:
  string CPF;
  string dataNascimento;
  string estadoCivil;
};

#endif