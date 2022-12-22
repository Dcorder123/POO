#ifndef ATOR_H
#define ATOR_H

#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;
/*Classe Ator que herda da classe Pessoa
contém o tempo de carreira do ator
tem o metodo imprimir que imprime o nome do ator e o tempo de carreira
*/

class Ator : public Pessoa {
public:
    Ator(string n, string t);/*construtor da classe Ator*/
    string getTempoDeCarreira() const{ return tempo_de_carreira; }/*metodo retorna tempo de carreira do ator*/
    void setTempoDeCarreira(string t) { tempo_de_carreira = t; }/*metodo que atribui o tempo de carreira do ator*/
    void imprimir();/*metodo imprimir que imprime o nome do ator e o tempo de carreira*/
protected:
    string tempo_de_carreira;
};

#endif