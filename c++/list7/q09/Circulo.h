#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
public:
    Circulo(double raio): FormaBidimensional(9999) {
        this->raio = raio;
    }

    virtual void desenhar() {
        cout << "  _ " << endl;
        cout << "/   \\" << endl;
        cout << "\\   /" << endl;
        cout << "  ~ " << endl;
        cout << "A área do círculo é: " << calcularArea() << endl;
        cout << "O perímetro do círculo é: " << calcularPerimetro() << endl;
    }
    virtual double calcularArea();
    virtual double calcularPerimetro();
    private:
        double raio;
};

#endif