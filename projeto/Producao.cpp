#include <iostream>
#include <string>
#include "Producao.h"

using namespace std;

Producao::Producao(string n, vector<Ator> a, vector<Diretor> d) {
    setNome(n);
    atores = a;
    diretores = d;
}

void Producao::removerAtor(Ator a) {
    for (int i = 0; i < atores.size(); i++) {
        if (a.getNome() == atores[i].getNome()) {
            atores.erase(atores.begin() + i);
        }
    }
}

void Producao::removerDiretor(Diretor d) {
    for (int i = 0; i < diretores.size(); i++) {
        if (d.getNome() == diretores[i].getNome()) {
            diretores.erase(diretores.begin() + i);
        }
    }
}
