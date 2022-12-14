#include <iostream>
#include "Streaming.h"
#include "Producao.h"
#include "Filme.h"
#include "Series.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::ostream;

Streaming::Streaming(string n, string v): App(n, v)
{
}

Streaming &Streaming::operator << (Producao &p)
{
    producoes.push_back(&p);
    return *this;
}

Streaming &Streaming::operator >> (Producao &p)
{
    for(int i = 0; i < producoes.size(); i++)
    {
        if(producoes[i] == &p)
        {
            producoes.erase(producoes.begin() + i);
        }
    }
    return *this;
}

void Streaming::run()
{
    cout << *this;
    cout << "Escolha uma producao para assistir: " << endl;
    int escolha;
    cin >> escolha;
    cout << "Assistindo: " << producoes[escolha]->getNome() << endl;
    cout << endl;
    producoes[escolha]->play();
}

ostream &operator << (ostream &out, Streaming &s)
{
    out << "Streaming: " << s.nome << endl;
    out << "Versao: " << s.versao << endl;
    out << "Producoes: " << endl;
    for(int i = 0; i < s.producoes.size(); i++)
    {
        out << i << " - " << s.producoes[i]->getNome() << endl;
    }
    return out;
}


// Path: projeto/Streaming.h