#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    int dia, mes, ano;
    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mês: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;
    Data data(dia, mes, ano);
    data.mostrarData();
    return 0;
}