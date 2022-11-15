#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

Animal::Animal()
{
    name = " ";
    raca = " ";
}

Animal::Animal(string n, string r)
{
    name = n;
    raca = r;
}

void Animal::caminha(string n)
{
    if (n != " ")
        cout << "O animal " << name << " da raca " << raca << " esta caminhando" << endl;
    else
        cout << "O animal esta caminhando" << endl;
    
}