#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

Data::Data(int dia, int mes, int ano) {
  setDia(dia);
  setMes(mes);
  setAno(ano);
}

void Data::setDia(int dia1) {
  dia = dia1;
}

void Data::setMes(int mes1) {
  if (mes1 > 0 && mes1 <= 12) {
    mes = mes1;
  } 
  else {
    mes = 1;
  }
}

void Data::setAno(int ano1) {
  ano = ano1;
}

int Data::getDia() {
  return dia;
}

int Data::getMes() {
  return mes;
}

int Data::getAno() {
  return ano;
}

void Data::mostrarData() {
  cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}

