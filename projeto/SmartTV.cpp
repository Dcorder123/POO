#include <iostream>
#include "SmartTV.h"
#include "App.h"
#include "Time.h"

using namespace std;

SmartTV::SmartTV(string marca, string modelo, string versao_so): marca(marca), modelo(modelo), versao_so(versao_so){}
SmartTV &operator << (App &a, SmartTV &s)
{
    s.apps.push_back(&a);
    return s;
}
SmartTV &operator >> (App &a, SmartTV &s)
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

// Path: projeto/SmartTV.h
