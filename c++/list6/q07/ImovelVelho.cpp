#include <iostream>
#include <string>
using namespace std;
#include "Imovel.h"
#include "ImovelVelho.h"

ImovelVelho::ImovelVelho(string endereco, double preco) : Imovel(endereco, preco)
{
    setPreco(preco);
}

void ImovelVelho::setPreco(double preco)
{
    this->preco = preco - (preco * 0.1);
}

double ImovelVelho::getPreco()const
{
    return this->preco;
}

// Compare this snippet from list6/q07/Imovel.h: