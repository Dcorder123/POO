#include <iostream>
#include <string>
#include "Pessoa.h"
using std::string;
using std::cout;
using std::endl;

Pessoa::Pessoa(string nome, int idade, int altura)
{
    setNome(nome);
    setIdade(idade);
    setAltura(altura);
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setIdade(int idade)
{
    if (idade < 0)
    {
        cout << "Idade invalida" << endl;
        this->idade = 0;
    }
    else
    {
        this->idade = idade;
    }
}

void Pessoa::setAltura(int altura)
{   
    if (altura < 0)
    {
        cout << "Altura invalida" << endl;
        this->altura = 0;
    }
    else
    {
        this->altura = altura;
    }
}

void Pessoa::imprime()const
{
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "Altura: " << this->altura << endl;
}

// Path: list4/Pessoa.cpp