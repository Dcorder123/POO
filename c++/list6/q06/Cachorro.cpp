#include "Cachorro.h"

#include <iostream>
#include <string>
using namespace std;

Cachorro::Cachorro(string nome , string raca):Animal(nome,raca)
{
  //
}


string Cachorro::late()
{
    return "Au Au";
}

// Compare this snippet from list6/q06/Cachorro.cpp:
