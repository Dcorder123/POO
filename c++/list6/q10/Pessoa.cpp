#include "Pessoa.h"
#include <iostream>
using namespace std;

Pessoa::Pessoa()
{
    nome = "Sem nome";
}

Pessoa::Pessoa(string nome)
{
    this->nome = nome;
}

ostream &operator<<(ostream &output, const Pessoa &p)
{
    output << "Nome: " << p.nome << endl;
    return output;
}
