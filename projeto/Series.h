#ifndef SERIES_H
#define SERIES_H
#include "Producao.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
/*Classe Series que herda da classe Producao
contém o numero de episodios da serie
tem o metodo imprimir que imprime o nome da serie e o numero de episodios
*/
class Series : public Producao {
public:
    Series(string n, vector<Ator> a, vector<Diretor> d, int n_episodios, string t);/*construtor da classe Series*/
    int getNEpisodios() const { return n_episodios; }/*metodo retorna numero de episodios da serie*/
    void setNEpisodios(int n) { n_episodios = n; }/*metodo que atribui o numero de episodios da serie*/
    string getTipo() const { return tipo; }/*metodo retorna o tipo da serie*/
    virtual void play();/*metodo virtual que imprime o nome da serie e o numero de episodios*/

protected:
    int n_episodios;
};

#endif