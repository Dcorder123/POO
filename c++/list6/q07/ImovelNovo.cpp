#include "ImovelNovo.h"
#include <iostream>
#include <string>
using namespace std;

ImovelNovo::ImovelNovo(string endereco, double preco) : Imovel(endereco, preco)
{
    setPreco(preco);
}

void ImovelNovo::setPreco(double preco)
{
    this->preco = preco + (preco * 0.1);
}

double ImovelNovo::getPreco()const
{
    return this->preco;
}
