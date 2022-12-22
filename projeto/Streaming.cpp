#include <iostream>
#include "Streaming.h"
#include "Producao.h"
#include "Filme.h"
#include "Series.h"
#include <fstream>
#include <string>
#include <exception>
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
        cout << endl;
        cout << "Escolha uma produção para assistir: " ;
        cout << *this;
        cout << "Escolha: ";
        
        string escolha;
        try {
            cin >> escolha;
            if  (escolha == "-1")
        {
            return;
        }
        else if (escolha == "99"){
            cout << "Desligando..." << endl;
            exit(0);
            return;
        }
         for (int i = 0; i < nome.length();i+=1){
                if (isdigit(nome[i])){
                    int escolha_int = stoi(escolha);
                    if (escolha_int < 0 || escolha_int >= producoes.size())
                    {
                        throw std::runtime_error("\033[31mProdução não encontrado\033[0m");
                    }
                    else{
                        cout << "Assistindo: " << producoes[escolha_int]->getNome() << endl;
                        cout << endl;
                        producoes[escolha_int]->play();
                        cout << "Fim da reprodução";
                        cout << endl;
                    }
                }
                else{
                    throw std::runtime_error("\033[31mProdução não encontrado digite um numero\033[0m");
                }
            }
        
        } 
        catch (std::runtime_error& e) {
            // Trata a exceção de string vazia
            std::cout << "\033[31mErro: \033[0m" << e.what() << std::endl;
            }
        
        
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