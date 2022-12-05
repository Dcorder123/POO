#include <iostream>
#include <string>
#include "Produtos.h"
#include "CarrinhoDeCompras.h"
using namespace std;

std::ostream& operator<<(std::ostream& os, const CarrinhoDeCompras& carrinho){
    for(int i = 0; i < carrinho.quantidadeDeProdutos; i++){
        os << carrinho.listaDeCompras[i] << endl;
    }
    return os;
}

CarrinhoDeCompras::CarrinhoDeCompras() {
    this->quantidadeDeProdutos = 0;
}

CarrinhoDeCompras::CarrinhoDeCompras(int quantidadeDeProdutos) {
    setQuantidadeDeProdutos(quantidadeDeProdutos);
}

void CarrinhoDeCompras::operator<<(const Produto& produto){
    listaDeCompras[quantidadeDeProdutos] = produto;
    quantidadeDeProdutos++;
}

void CarrinhoDeCompras::operator>>(const Produto& produto){
    for(int i = 0; i < quantidadeDeProdutos; i++){
        if(listaDeCompras[i].getNome() == produto.getNome()){
            for(int j = i; j < quantidadeDeProdutos; j++){
                listaDeCompras[j] = listaDeCompras[j+1];
            }
            quantidadeDeProdutos--;
        }
    }
}

