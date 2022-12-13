#include <iostream>
#include "Streaming.h"
#include "Producao.h"
#include "Filme.h"
#include "Series.h"

using namespace std;

Streaming::Streaming(string nome, string versao) : App(nome, versao){}

Producao &Streaming::operator << (Producao &p)
{
    producoes.push_back(&p);
    return p;
}

Producao &Streaming::operator >> (Producao &p)
{
    for(int i = 0; i < producoes.size(); i++)
    {
        if(producoes[i] == &p)
        {
            producoes.erase(producoes.begin() + i);
        }
    }
    return p;
}

void Streaming::run()
{
    cout << "Streaming: " << nome << endl;
    cout << "Versao: " << versao << endl;
    cout << "Producoes: " << endl;
    for(int i = 0; i < producoes.size(); i++)
    {
        cout << i << " - " << producoes[i]->getNome() << endl;
    }
    cout << "Escolha uma producao para assistir: " << endl;
    int escolha;
    cin >> escolha;
    producoes[escolha]->play();
}



// Path: projeto/Streaming.h