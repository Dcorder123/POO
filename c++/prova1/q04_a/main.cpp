#include <iostream>
#include "Carro.h"

using std::cout, std::endl;
int main() {
  
  Carro carroTeste1("", -1, "");

  carroTeste1.displayMessage();
  
  cout << endl;

  Carro carroTeste2("Uma marca bem grande", 2020, "Um nome bem grande");
  carroTeste2.displayMessage();

  return 0;
}