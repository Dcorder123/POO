#include <iostream>
#include <string>
using namespace std;
#include "Imovel.h"

Imovel::Imovel(string endereco, double preco)
{
    setEndereco(endereco);
    setPreco(preco);
}

void Imovel::setEndereco(string endereco)
{
    this->endereco = endereco;
}

void Imovel::setPreco(double preco)
{
    this->preco = preco;
}