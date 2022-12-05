#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa
{
    friend ostream &operator<<(ostream &, const Pessoa &);
    public:
        Pessoa();
        Pessoa(string nome);
        string getNome()const{return nome;}
        void setNome(string nome){this->nome = nome;}
    protected:
        string nome;
        
};

#endif