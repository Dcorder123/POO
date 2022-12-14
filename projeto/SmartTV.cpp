#include <iostream>
#include "SmartTV.h"
#include "App.h"
#include "Time.h"

using namespace std;

SmartTV::SmartTV(string marca, string modelo, string versao_so): marca(marca), modelo(modelo), versao_so(versao_so){}
SmartTV &operator << (SmartTV &s, App &a)
{
    s.apps.push_back(&a);
    return s;
}
SmartTV &operator >> (SmartTV &s, App &a)
{
    for(int i = 0; i < s.apps.size(); i++)
    {
        if(s.apps[i] == &a)
        {
            s.apps.erase(s.apps.begin() + i);
        }
    }
    return s;
}

void SmartTV::run()
{
    this -> ligar();
    if(ligada)
    {
        for(int i = 0; i < apps.size(); i++)
        {
            cout << i << " - " << apps[i]->getNome() << endl;
        }
        int opcao;
        cout << "Escolha um app: ";
        cin >> opcao;
        apps[opcao]->run();
    }
    else
    {
        cout << "A TV esta desligada" << endl;
    }
}
// Path: projeto/SmartTV.h
