#include <iostream>
using std::cout;
using std::endl;

#include "Retangulo.h"

//Implementação

Retangulo::Retangulo(double altura1, double largura1) {
  setAltura(altura1);
  setLargura(largura1);
}

void Retangulo::setAltura(double altura1) {
  altura = (altura1 > 0.0 && altura1 < 20.0) ? altura1 : 1.0;
}

void Retangulo::setLargura(double largura1) {
  largura = (largura1 > 0.0 && largura1 < 20.0) ? largura1 : 1.0;
}

double Retangulo::getArea() {
  return altura * largura;
} 

double Retangulo::getPerimetro() {
  return 2 * (altura + largura);
}


void Retangulo::print() {
  cout << "Altura: " << getAltura() << " m" << endl;
  cout << "Largura: " << getLargura() << " m" << endl;
  cout << "Area: " << getArea() << " m²" << endl;
  cout << "Perimetro: " << getPerimetro() << " m" << endl;
}