#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
  Animal();
  Animal(string, string);
  void caminha(string);
private:
    string name;
    string raca;
    
};

#endif