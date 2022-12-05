#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"
#include <iostream>
using namespace std;

class Cliente : public PessoaFisica
{
    friend ostream &operator<<(ostream &, const Cliente &);
    public:
        Cliente();
        Cliente(string nome, string cpf, string endereco, string telefone);
        string getEndereco()const{return endereco;}
        void setEndereco(string endereco){this->endereco = endereco;}
        string getTelefone()const{return telefone;}
        void setTelefone(string telefone){this->telefone = telefone;}
    protected:
        string endereco;
        string telefone;
};

#endif