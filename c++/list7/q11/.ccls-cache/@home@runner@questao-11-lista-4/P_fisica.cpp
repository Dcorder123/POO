#include "P_fisica.hpp"

Pfisica::Pfisica() : Pessoa("","",""), dataNascimento(""), estadoCivil("") {}

void Pfisica::operator=(Pfisica aux){
  nome = aux.nome;
  endereco = aux.endereco;
  email = aux.email;
  CPF = aux.CPF;
  dataNascimento = aux.dataNascimento;
  estadoCivil = aux.estadoCivil;
}


void Pfisica::pesquisar(string n){
  if(n == nome || n == CPF){
    cout<< "\t\tPESSOA FISICA" << endl;
    cout<< "----------------------------------" <<endl;
    cout << "CPF: " << CPF << endl ;
    cout << "Nome: " << nome << endl ;
    cout << "Endereço: " << endereco << endl ;
    cout << "Email: " << email << endl ;
    cout << "Data de Nascimento: " << dataNascimento << endl ;
    cout << "Estado Civil: " << estadoCivil << endl ;
    cout<< "----------------------------------" <<endl;
  }
  
}