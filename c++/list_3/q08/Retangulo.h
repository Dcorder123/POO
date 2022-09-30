#ifndef RETANGULO_H
#define RETANGULO_H

#include <string>
using std::string;

//Interface
class Retangulo {

public:
  Retangulo(double = 1.0, double = 1.0);
  double getAltura(){return altura;}
  double getLargura(){return largura;}
  void setAltura(double);
  void setLargura(double);
  double getArea();
  double getPerimetro();
  void print();
  

private:
  double altura;
  double largura;
};


#endif