#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>
using namespace std;

class Imovel
{
public:
    Imovel(){endereco = ""; preco = 0;}
    Imovel(string="imovel", double=0);
    string getEndereco()const {return this->endereco;}
    double getPreco()const {return this->preco;}
    void setEndereco(string);
    void setPreco(double);
    
protected:
    string endereco;
    double preco;
};

#endif
