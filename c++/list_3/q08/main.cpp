#include <iostream>
using namespace std;
#include "Retangulo.h"

int main() {
  double altura, largura;
  
  cout << "Digite a altura do retangulo: ";
  cin >> altura;
  
  cout << "Digite a largura do retangulo: ";
  cin >> largura;
  
  Retangulo r(altura, largura);
  r.print();
  
  cout << "\n" << endl;
  cout << "Criando uma nova instancia de Retangulo vazia " << endl;
  Retangulo r2;
  r2.print();
  
  return 0;
}
