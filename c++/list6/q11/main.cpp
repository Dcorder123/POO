#include <iostream>
#include <string>
#include <vector>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Empresa.h"
using namespace std;

int main()
{
    system("cls");
    Empresa e1("Empresa 1", "123.456.789/0001-00", "Empresa 1 LTDA");
    e1.imprimeFuncionarios();
    e1.imprimeClientes();
    cout << "Folha de pagamento: " << e1.calculaFolhaPagamento() << endl;
    return 0;
}
