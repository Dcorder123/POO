#ifndef DIRETOR_H
#define DIRETOR_H

#include "Pessoa.h"

/*Classe Diretor que herda da classe Pessoa
contém a quantidade de produções que o diretor já dirigiu
tem o metodo imprimir que imprime o nome do diretor e a quantidade de produções que ele já dirigiu
*/
class Diretor : public Pessoa {
public:
    Diretor(string n, int n_producoes);
    int getQtdProducoes() const{ return qtd_Producoes; }/*metodo retorna quantidade de produções do diretor*/
    void setQtdProducoes(int n_producoes) { qtd_Producoes = n_producoes; }/*metodo que atribui a quantidade de produções do diretor*/
    void imprimir();/*metodo imprimir que imprime o nome do diretor e a quantidade de produções que ele já dirigiu*/
protected:
    int qtd_Producoes;
};

#endif

