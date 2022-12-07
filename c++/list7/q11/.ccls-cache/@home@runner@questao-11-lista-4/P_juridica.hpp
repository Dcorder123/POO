#ifndef PESSOAJ
#define PESSOAJ
#include "Pessoa.hpp"

class Pjuridica : public Pessoa{

public:
  Pjuridica();
  Pjuridica(string nome,string endereco,string email,string CNPJ,string inscEstadual,string razaoSocial) : Pessoa(nome,endereco,email),CNPJ(CNPJ),inscEstadual(inscEstadual), razaoSocial(razaoSocial) {}

  // Gets

  string getNome(){return nome;}
  string getEndereco(){return endereco;}
  string getEmail(){return email;}
  string getCNPJ(){return CNPJ;}
  string getInsc(){return inscEstadual;}
  string getRazao(){return razaoSocial;}

  // Sets

  void setNome(string x){nome = x;}
  void setEndereco(string x){endereco = x;}
  void setEmail(string x){email = x;}
  void setCNPJ(string x){CNPJ = x;}
  void setInsc(string x){inscEstadual = x;}
  void setRazao(string x){razaoSocial = x;}

  void operator=(Pjuridica);
  virtual void pesquisar(string);
private:
  string CNPJ;
  string inscEstadual;
  string razaoSocial;
};


#endif