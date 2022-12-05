#include <iostream>
using std::cout, std::endl;

#include "FormaBidimensional.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

int main() {
    FormaBidimensional *formas[3];
    formas[0] = new Circulo(2);
    formas[1] = new Quadrado(5);
    formas[2] = new Triangulo(2, 3);

    for (int i = 0; i < 3; i++) {
        formas[i]->desenhar();
        cout << endl;
    }

    return 0;
}