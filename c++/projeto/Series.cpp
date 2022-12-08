#include <iostream>
#include <string>
#include "Series.h"

using namespace std;

Series::Series(string n, vector<Ator> a, vector<Diretor> d, int n_episodios) : Producao(n, a, d) {
    setNEpisodios(n_episodios);
}

void Series::play() {
    cout << "Série: " << getNome() << endl;
    cout << "Atores: " << endl;
    for (int i = 0; i < atores.size(); i++) {
        atores[i].imprimir();
    }
    cout << "Diretores: " << endl;
    for (int i = 0; i < diretores.size(); i++) {
        diretores[i].imprimir();
    }
    cout << "Número de episódios: " << getNEpisodios() << endl;
}

// Path: c++/projeto/Ator.cpp