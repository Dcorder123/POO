#ifndef STREAMING_H
#define STREAMING_H

#include "App.h"
#include "Producao.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;

/*Classe Streaming que herda da classe App
 contém um vetor de producoes
 tem o metodo imprimir que imprime o nome do streaming e as producoes
 */
class Streaming : public App
{
    friend ostream &operator<<(ostream &out, Streaming &s);//imprime o nome do streaming e as producoes por meio de sobrecarga de operador

public:
    Streaming(string nome, string versao);/*construtor da classe Streaming*/
    Streaming &operator << (Producao &p);//adiciona producao
    Streaming &operator >> (Producao &p);//remove producao
    virtual void run() override;//executa o app exibir as producoes e o usuario escolhe uma para assistir
    
protected:
    vector<Producao*> producoes;
};

#endif // STREAMING_H