#ifndef GATO_H
#define GATO_H

#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

class Gato : public Animal
{
public:
    Gato(string="mia", string="ashera");
    string mia();
};

#endif