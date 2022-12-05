#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

#include "Time.h"


//o uso de métodos inline não alteram a lógica do programa

int main() {
  int h, m, s;
  string mudar;

  cout << "Digite a hora: ";
  cin >> h;
  cout << "Digite os minutos: ";
  cin >> m;
  cout << "Digite os segundos: ";
  cin >> s;

  Time t(h, m, s);

  cout << "Digite o que deseja incrementar(s: segunda, m:minuto , h:hora): ";
  cin >> mudar;

  t.tick(mudar);

  cout << "A hora atual é: ";
  t.printUniversal();
  t.printStandard();
  t.printIncremento(mudar);
  t.printUniversal();

  return 0;
}