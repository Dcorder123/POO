#include <iostream>
#include <string>
#include "Agenda.h"
using namespace std;

Agenda::Agenda()
{
    numPessoas = 0;
}

void Agenda::armazenaPessoa(string nome, int idade, float altura)
{
    Pessoa p(nome, idade, altura);
    armazenaPessoa(p);
}

void Agenda::armazenaPessoa(const Pessoa &p)
{
    if (numPessoas < 10)
    {
        pessoas[numPessoas] = p;
        numPessoas++;
    }
    else
    {
        cout << "Agenda cheia" << endl;
    }
}

void Agenda::removePessoa(string nome)
{
    int pos = buscaPessoa(nome);
    if (pos != -1)
    {
        for (int i = pos; i < numPessoas - 1; i++)
        {
            pessoas[i] = pessoas[i + 1];
        }
        numPessoas--;
    }
}

int Agenda::buscaPessoa(string nome) const
{
    for (int i = 0; i < numPessoas; i++)
    {
        if (pessoas[i].getNome() == nome)
        {
            return i;
        }
    }
    return -1;
}

void Agenda::imprimePovo() const
{
    for (int i = 0; i < numPessoas; i++)
    {
        pessoas[i].imprime();
    }
}

void Agenda::imprimePessoa(int i) const
{
    if (i >= 0 && i < numPessoas)
    {
        pessoas[i].imprime();
    }
    else
    {
        cout << "Posicao invalida" << endl;
    }
}

// Path: list4/q09/Agenda.cpp