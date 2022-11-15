#include "iostream"
#include "PessoaJuridica.h"

using namespace std;

PessoaJuridica::PessoaJuridica()
{
    cnpj = "Sem cnpj";
    razaoSocial = "Sem razao social";
}

PessoaJuridica::PessoaJuridica(string nome, string cnpj, string razaoSocial) : Pessoa(nome)
{
    setCnpj(cnpj);
    setRazaoSocial(razaoSocial);
}

ostream &operator<<(ostream &output, const PessoaJuridica &pj)
{
    output << "Nome: " << pj.nome << endl;
    output << "CNPJ: " << pj.cnpj << endl;
    output << "Razao Social: " << pj.razaoSocial << endl;
    return output;
}

void PessoaJuridica::setCnpj(string cnpj)
{
    this->cnpj = cnpj;
}

void PessoaJuridica::setRazaoSocial(string razaoSocial)
{
    this->razaoSocial = razaoSocial;
}

// Compare this snippet from list6/q08/PessoaJuridica.cpp: