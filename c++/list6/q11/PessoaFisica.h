#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"
#include <iostream>
using namespace std;

class PessoaFisica : public Pessoa
{
    friend ostream &operator<<(ostream &, const PessoaFisica &);
    public:
        PessoaFisica();
        PessoaFisica(string nome, string cpf);
        string getCpf()const{return cpf;}
        void setCpf(string cpf);
    protected:
        string cpf;
        
};

#endif