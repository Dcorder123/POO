#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
    Quadrado(double l) : FormaBidimensional(4){
        this->lado = l;
    }

    virtual void desenhar() {
        cout << "-----" << endl;
        cout << "|   |" << endl;
        cout << "-----" << endl;
        cout << "A área do quadrado é: " << calcularArea() << endl;
        cout << "O perímetro do quadrado é: " << calcularPerimetro() << endl;
    }
    virtual double calcularArea();
    virtual double calcularPerimetro();
  private:
    double lado;
};

#endif