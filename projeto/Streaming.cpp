#include <iostream>
#include "Streaming.h"
#include "Producao.h"
#include "Filme.h"
#include "Series.h"
#include <fstream>
using std :: ifstream;
using std :: ofstream;

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::ostream;

using std::left, std::right;

#include <iomanip>
using std::setw;
using std::setfill;

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
    while (true){
        cout << "Escolha uma producao para assistir: " << endl;
        cout << *this;
        cout << "Escolha: ";
        
        double escolha;
        cin >> escolha;
        if (cin.fail()) {
            // Limpar o estado de falha de entrada
            cin.clear();
            // Descartar o caractere inválido da entrada
            cin.ignore();
            // Descartar a linha inteira
            cout << "Entrada invalida" << endl;
            continue;
        }
        if  (escolha == -1)
        {
            return;
        }
        else if (escolha == 99){
            cout << "Desligando..." << endl;
            exit(0);
            return;
        }

        cout << "Assistindo: " << producoes[escolha]->getNome() << endl;
        cout << endl;
        producoes[escolha]->play();

        }
    
}

ostream &operator << (ostream &out, Streaming &s)
{
    out << endl;
    out << "--Streaming--" << endl;
    out << "Streaming: " << s.nome << endl;
    out << "Versao: " << s.versao << endl;
    out << "Producoes: " << endl;
    out << "99 - Desligar" << endl;
    out << "-1 para voltar" << endl;
    out << right;
    out.fill('|');
    for(int i = 0; i < s.producoes.size(); i++)
    {
        out << setw(2) << i << " - " << s.producoes[i]->getNome() << endl;
    }
    return out;
}

// Path: projeto/Streaming.h