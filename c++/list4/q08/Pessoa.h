#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa
{
public:
    Pessoa(string, int, int);
    void setNome(string);
    void setIdade(int);
    void setAltura(int);
    string getNome()const {return this->nome;}
    int getIdade()const {return this->idade;}
    int getAltura()const {return this->altura;}
    void imprime()const;

private:
    string nome;
    int idade;
    int altura;
};

#endif