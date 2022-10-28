#include <iostream>

#include "ArrayList.h"
using std::cout;
using std::endl;

int main() {
    ArrayList al(10);

    al.add(1).add(2).add(10).add(20).add(10);
    cout << "busca indice 3: " << al.busca(3) << endl;
    al.print();
    al.remove(1);
    
    cout << "Remove 1" << endl;
    
    al.print();
    al.removeEL(10);

    cout << "Remove todos os elementos 10" << endl;
    al.print();
    al.somaArray(10);
    
    cout << "Soma 10 a todos os elementos" << endl;
    al.print();
    al.subArray(10);
    
    cout << "Subtrai 10 a todos os elementos" << endl;
    al.print();
    al.multArray(10);
    
    cout << "Multiplica 10 a todos os elementos" << endl;
    al.print();
    al.divArray(10);
    
    cout << "Divide 10 a todos os elementos" << endl;
    al.print();

    return 0;
}