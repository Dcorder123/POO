#include <iostream>
using std::cout;
using std::endl;
#include <ctime>
#include <unistd.h>

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  int i = 0;
  while (i < 10) {
    Time t;
    t.printUniversal();
    t.printStandard();
    i++;
    sleep(1);
  }
  
  return 0;
}