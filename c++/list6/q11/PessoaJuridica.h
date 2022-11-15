#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"
#include <iostream>
using namespace std;

class PessoaJuridica : public Pessoa
{
    friend ostream &operator<<(ostream &, const PessoaJuridica &);
    public:
        PessoaJuridica();
        PessoaJuridica(string nome, string cnpj, string razaoSocial);
        string getCnpj()const{return cnpj;}
        void setCnpj(string cnpj);
        string getRazaoSocial()const{return razaoSocial;}
        void setRazaoSocial(string razaoSocial);
    private:
        string cnpj;
        string razaoSocial;
        
};

#endif