#ifndef SMARTTV_H
#define SMARTTV_H

#include "App.h"
#include <iostream>
#include <string>
#include <vector>
using std::vector;

class SmartTV 
{
    friend SmartTV &operator << (App &a, SmartTV &s);//adiciona app
    friend SmartTV &operator >> (App &a, SmartTV &s);//remove app
public:
    SmartTV(string nome, string versao, string marca, string modelo, string versao_so);
    void run(App &a){a.run();}//executa o app
protected:
    vector<App*> apps;
    string marca;
    string modelo;
    string versao_so;
    bool ligada;
};

#endif // SMARTTV_H