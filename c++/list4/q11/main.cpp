#include <iostream>

#include "ArrayList.h"

int main() {
    ArrayList al(10);

    al.add(1).add(2).add(10).add(20).add(10);;
    cout << "busca indice 3: " << al.busca(3) << endl;
    al.print();
    al.remove(1);
    
    cout << "Remove 1" << endl;
    
    al.print();
    al.removeEL(10);

    return 0;
}