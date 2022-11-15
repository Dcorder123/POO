#include <iostream>
#include <string>
using namespace std;
#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

int main()
{
    Imovel imovel1("Rua Calos junior", 100000);
    cout << "Endereco: " << imovel1.getEndereco() << endl;
    cout << "Preco: R$" << imovel1.getPreco() << endl;
    cout << "---------------------------------" << endl;
    ImovelNovo imovel2("Rua Calos junior", 100000);
    cout << "Endereco: " << imovel2.getEndereco() << endl;
    cout << "Preco: R$" << imovel2.getPreco() << endl;
    cout << "---------------------------------" << endl;

    ImovelVelho imovel3("Rua Calos junior", 100000);
    cout << "Endereco: " << imovel3.getEndereco() << endl;
    cout << "Preco: R$" << imovel3.getPreco() << endl;

    return 0;
}