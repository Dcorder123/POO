#include <iostream>
#include "P_juridica.hpp"
#include "P_fisica.hpp"
#include "Agenda.hpp"


int main() {
  Agenda a(2,2);
  Pjuridica p1("Lissandra","rua1","@.com","123","78954312","razao");
  Pfisica p2("Mateus","rua1","@.com","456","7895431","teste");
  a.adicionaPessoaFisica(p2);
  a.adicionaPessoaJuridica(p1);
  a.pesquisar("nome");
  cout<<endl<<endl;
  a.pesquisar("luis");
  cout<<endl<<endl;
  a.visualizarContatos();
  a.removePessoa("Mateus");
  a.visualizarContatos();
}