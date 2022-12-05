#include <iostream>
using namespace std;

#include "Empregado.h"

Empregado::Empregado(string nome1, string sobrenome1, double salario1)
{
  setNome(nome1);
  setSobrenome(sobrenome1);
  setSalario(salario1);
}

void Empregado::setNome(string nome1)
{
  nome = nome1;
}

void Empregado::setSobrenome(string sobrenome1)
{
  sobrenome = sobrenome1;
}

void Empregado::setSalario(double salario1)
{
  if (salario1 > 0){
    salario = salario1;
  }
  else if (salario1 <= 0){
    salario = 0;
  }
}

string Empregado::getNome()
{
  return nome;
}

string Empregado::getSobrenome()
{
  return sobrenome;
}

double Empregado::getSalario()
{
  return salario;
}

void Empregado::displayMessage()
{
  cout << "Nome: " << getNome() << " " << getSobrenome() << endl;
  cout << "Salário: " << getSalario() << endl;

  aumentoSalario();

  cout << "Salário com aumento de %10: " << getSalario() << endl;
}

void Empregado::aumentoSalario()
{
  double aumento = getSalario() * 0.1;
  setSalario(getSalario() + aumento);
}