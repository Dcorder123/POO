#include <iostream>
using std::cout, std::endl;

#include "conta.h"
#include "contapoupanca.h"
#include "contalimite.h"
#include "contacorrente.h"




int main() {
    Conta *contas[] = {new ContaCorrente(2, "Felipe", 1500),new ContaLimite(1,"Daniel",500, -127 ), new ContaPoupanca(3, "Larissa", 1000, "22/11/2022")};
    for(int i=0;i<3;i++){
        if(i==1){contas[i]->retirada(300);}
        
        else if(i==2){contas[i]->depositar(1500);}
        
        contas[i]->extrato();
        cout << endl;
    }
    
    ContaCorrente conta1 = ContaCorrente(2, "Felipe", 1500);
    ContaLimite conta2 = ContaLimite(1,"Daniel",500, -127 );

    conta1.extrato();
    conta2.extrato();
    conta1.transferencia(conta2,100);
    conta1.extrato();
    conta2.extrato();

    
    return 0;

}