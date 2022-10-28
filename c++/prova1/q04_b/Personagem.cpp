#include "Personagem.h"
#include <iostream>
#include <string>
using std::cout, std::endl;


Personagem::Personagem(string nomePer)
{
    setNome(nomePer);
    setPapel("sem papel");
    setFilme("Vazio(nada)");
}
Personagem::Personagem(string nomePer, string papelPer, string FilmePer)
{
    setNome(nomePer);
    setPapel(papelPer);
    setFilme(FilmePer);
}

void Personagem::setNome(string nome1)
{
    nome = nome1;
}


void Personagem::setPapel(string papel1)
{
    papel = papel1;
}

void Personagem::setFilme(string filme1)
{
    nomeFilme = filme1;
}

void Personagem::displayMessage()
{
    cout << "Nome: " << getNome() << endl;
    cout << "Papel: " << getPapel() << endl;
    cout << "Filme: " << getFilme() << endl;
    cout << endl;
}

// Language: cpp