#include <iostream>
#include <string>
#include "Produtos.h"
using namespace std;
// feito por Daniel Barbosa Vasconcelos
// em 2022-11-18

std::ostream& operator<<(std::ostream& os, const Produto& produto){
    os << "Nome: " << produto.nome << endl;
    os << "Categoria: " << produto.categoria << endl;
    os << "Validade: " << produto.validade << endl;
    return os;
}


Produto::Produto() {
    this->nome = "valor default";
    this->categoria = "vazio";
    this->validade = "valor default";
}
Produto::Produto(string nome, string categoria, string validade){
    setNome(nome);
    setCategoria(categoria);
    setValidade(validade);
}



