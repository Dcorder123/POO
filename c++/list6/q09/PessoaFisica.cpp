#include "PessoaFisica.h"
#include "Pessoa.h"
#include <iostream>
using namespace std;

PessoaFisica::PessoaFisica()
{
    cpf = "Sem cpf";
}

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome)
{
    setCpf(cpf);
}
ostream &operator<<(ostream &output, const PessoaFisica &pf)
{
    output << "Nome: " << pf.nome << endl;
    output << "CPF: " << pf.cpf << endl;
    return output;
}

void PessoaFisica::setCpf(string cpf)
{
    this->cpf = cpf;
}

// Compare this snippet from list6/q08/PessoaFisica.cpp: