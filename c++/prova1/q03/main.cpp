#include <iostream>
#include <string>
#include "Personagem.h"

using std::cout, std::endl;


int main()
{
    Personagem p1("Mickey", "M");
    Personagem p2("Minnie", "F");
    cout << "p1: " << p1.getNome() << " " << p1.getSexo() << endl;
    cout << "p2: " << p2.getNome() << " " << p2.getSexo() << endl;
    
    cout << endl;
    cout << "Troca de almas" << endl;
    cout << endl;
    
    p1.trocaAlma(p2);
    cout << "p1: " << p1.getNome() << " " << p1.getSexo() << endl;
    cout << "p2: " << p2.getNome() << " " << p2.getSexo() << endl;
    return 0;
}