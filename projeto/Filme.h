#ifndef FILME_H
#define FILME_H

#include "Producao.h"
#include <string>
#include <iostream>
#include <vector>

/*Classe Filme que herda da classe Producao
 contém a duração do filme
 tem o metodo imprimir que imprime o nome do filme e a duração
 */
using namespace std;

class Filme : public Producao {
public:
    Filme(string n, vector<Ator> a, vector<Diretor> d, double duracao, string t);/*construtor da classe Filme*/
    double getDuracao() const{ return duracao; }/*metodo retorna duração do filme*/
    void setDuracao(double d) { duracao = d; }/*metodo que atribui a duração do filme*/
    virtual void play()override;/*metodo virtual que imprime o nome do filme e a duração*/
    

protected:
    double duracao;
};
    
#endif
