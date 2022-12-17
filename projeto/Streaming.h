#ifndef STREAMING_H
#define STREAMING_H

#include "App.h"
#include "Producao.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;

class Streaming : public App
{
    friend ostream &operator<<(ostream &out, Streaming &s);

public:
    Streaming(string nome, string versao);
    Streaming &operator << (Producao &p);//adiciona producao
    Streaming &operator >> (Producao &p);//remove producao
    virtual void run(Estado&) override;//executa o app exibir as producoes e o usuario escolhe uma para assistir
    
protected:
    vector<Producao*> producoes;
};

#endif // STREAMING_H