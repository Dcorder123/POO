#ifndef STREAMING_H
#define STREAMING_H
#include "App.h"
#include "Producao.h"
#include <iostream>
#include <string>
using namespace std;
using std::vector;
class Streaming : public App
{
    friend ostream &operator<<(ostream &out, Streaming &s);

public:
    Streaming();
    Producao &operetor(const Producao &p);
    Producao &operetor (const Producao &p);

protected:
    vector<Producao&> &producoes;
    string nome;
};

#endif // STREAMING_H