#ifndef AGENDA
#define AGENDA

#include <string>
#include "Pessoa.hpp"
#include "P_fisica.hpp"
#include "P_juridica.hpp"
using namespace std;

class Agenda{

public:
  Agenda(int numPf, int numPj) : numPf(numPf), numPj(numPj),controleF(0),controleJ(0) 
{
  pessoasf = new Pfisica[numPf];
  pessoasj = new Pjuridica[numPj];
}

  void adicionaPessoaFisica(Pfisica);
  void adicionaPessoaJuridica(Pjuridica);
  void removePessoa(string);
  void visualizarContatos();
  void pesquisar(string nome);
private:
  Pfisica *pessoasf;
  int numPf;
  int controleF;
  Pjuridica *pessoasj;
  int numPj;
  int controleJ;
};
#endif