#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
    Triangulo(double base, double altura) : FormaBidimensional(3)
    {
        this->base = base;
        this->altura = altura;
    }

    virtual void desenhar() {
        cout << "  .   " << endl;
        cout << " / \\ " << endl;
        cout << "/   \\" << endl;
        cout << "~~~~~ " << endl;
        cout << "A área do triângulo é: " << calcularArea() << endl;
        cout << "O perímetro do triângulo é: " << calcularPerimetro() << endl;
    }
    virtual double calcularArea();
    virtual double calcularPerimetro();
    private:
        double base;
        double altura;
};

#endif