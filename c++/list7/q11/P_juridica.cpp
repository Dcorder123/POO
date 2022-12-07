#include "P_juridica.hpp"

Pjuridica::Pjuridica() :  Pessoa("","",""), inscEstadual(""), razaoSocial("") {}

void Pjuridica::operator=(Pjuridica aux){
  nome = aux.nome;
  endereco = aux.endereco;
  email = aux.email;
  CNPJ = aux.CNPJ;
  inscEstadual = aux.inscEstadual;
  razaoSocial = aux.razaoSocial;
}

void Pjuridica::pesquisar(string n){
  if(n == nome || n == CNPJ){
    cout<< "\t\tPESSOA JURIDICA" << endl;
    cout<< "----------------------------------" <<endl;
    cout << "CNPJ: " << CNPJ << endl ;
    cout << "Nome: " << nome << endl ;
    cout << "Endereço: " << endereco << endl ;
    cout << "Email: " << email << endl ;
    cout << "Inscrição Estadual: " << inscEstadual << endl ;
    cout << "Razão Social: " << razaoSocial << endl ;
    cout<< "----------------------------------" <<endl;
  }
  
}