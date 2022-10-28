#include <iostream>
#include <string>
#include "Agenda.h"
using namespace std;

Agenda::Agenda(int tPessoas){
    pessoas = new Pessoa[tPessoas];
    numPessoas = 0;
    tamanhoArr = tPessoas;
}
Agenda::~Agenda(){
    delete[] pessoas;
}

void Agenda::armazenaPessoa(string nome, int idade, float altura)
{
    Pessoa p(nome, idade, altura);
    armazenaPessoa(p);
}

void Agenda::armazenaPessoa(const Pessoa &p)
{
    pessoas[this-> numPessoas++] = p;
}

void Agenda::removePessoa(string nome)
{
    for (int i = 0; i < numPessoas; i++)
    {
        if (pessoas[i].getNome() == nome)
        {
            pessoas[i] = Pessoa();
            for (int j = i; j < numPessoas; j++)
            {
                pessoas[j] = pessoas[j + 1];
            }
            return;
        }
    }
    cout << "Pessoa nao encontrada" << endl;
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
        if (pessoas[i].getNome() != "")
        {
            pessoas[i].imprime();
        }
    }
}

void Agenda::imprimePessoa(int i) const
{
    if (i < 0 || i >= numPessoas)
    {
        cout << "Posicao invalida" << endl;
    }
    else
    {
        pessoas[i].imprime();
    }
}

// Path: list4/q09/Agenda.cpp