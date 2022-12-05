#include <iostream>
#include <string>
#include "Produtos.h"
#include "CarrinhoDeCompras.h"
using namespace std;
// feito por Daniel Barbosa Vasconcelos
// em 2022-11-18

int main(){
    system("cls");
    Produto p1("Arroz", "Alimento", "01/01/2018");
    Produto p2("Feijao", "Alimento", "01/01/2018");
    Produto p3("Cafe", "Alimento", "01/01/2018");
    Produto p4("Leite", "Alimento", "01/01/2018");
    Produto p5("Cerveja", "Bebida", "01/01/2018");
    Produto p6("Refrigerante", "Bebida", "01/01/2018");
    Produto p7("Suco", "Bebida", "01/01/2018");
    

    CarrinhoDeCompras c1;
    //adicionando produtos ao carrinho
    cout << "Adicionando produtos ao carrinho" << endl;
    c1 << p1;
    c1 << p2;
    c1 << p3;
    c1 << p4;
    c1 << p5;
    c1 << p6;
    c1 << p7;
    cout << "Produtos adicionados ao carrinho: " << c1.getQuantidadeDeProdutos() << endl;

    cout <<endl<< c1 << endl;
    //removendo produtos do carrinho
    cout << "Removendo produtos do carrinho" << endl;
    c1 >> p1;
    c1 >> p2;
    c1 >> p3;
    c1 >> p4;
    c1 >> p5;

    cout << endl;
    cout << "Produtos removidos do carrinho, Quantidade restante:" << c1.getQuantidadeDeProdutos() << endl;
    cout << c1 << endl;
}