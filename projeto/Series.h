#ifndef SERIES_H
#define SERIES_H
#include "Producao.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Series : public Producao {
public:
    Series(string n, vector<Ator> a, vector<Diretor> d, int n_episodios, string t);
    int getNEpisodios() { return n_episodios; }
    void setNEpisodios(int n) { n_episodios = n; }
    virtual void play();

protected:
    int n_episodios;
};

#endif