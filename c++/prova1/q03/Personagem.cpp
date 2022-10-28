#include <iostream>
#include <string>
#include "Personagem.h"

using std::cout, std::endl;

Personagem::Personagem(string nomePer, string sexoPer)
{
    nome = nomePer;
    sexo = sexoPer;
}

void Personagem::setNome(string nome)
{
    this->nome = nome;
}

void Personagem::setSexo(string sexo)
{
    this->sexo = sexo;
}

void Personagem::trocaAlma(Personagem &p)
{
    string aux = this->nome;
    this->nome = p.nome;
    p.nome = aux;
    aux = this->sexo;
    this->sexo = p.sexo;
    p.sexo = aux;

}
