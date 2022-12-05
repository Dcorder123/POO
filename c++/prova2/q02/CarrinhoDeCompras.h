#ifndef CARRINHO_DE_COMPRAS_H
#define CARRINHO_DE_COMPRAS_H

#include <string>
#include "Produtos.h"
#include <iostream>
using namespace std;



class CarrinhoDeCompras {
    friend std::ostream& operator<<(std::ostream& os, const CarrinhoDeCompras& carrinho);
public:
    CarrinhoDeCompras();
    CarrinhoDeCompras(int quantidadeDeProdutos);
    void setQuantidadeDeProdutos(int quantidadeDeProdutos){this->quantidadeDeProdutos = quantidadeDeProdutos;}
    int getQuantidadeDeProdutos()const{return quantidadeDeProdutos;}
    void operator<<(const Produto& produto);//adiciona um produto ao carrinho
    void operator>>(const Produto& produto);//remove um produto do carrinho
private:
    Produto listaDeCompras[30];
    int quantidadeDeProdutos;

};

#endif /* CARRINHO_DE_COMPRAS_H */