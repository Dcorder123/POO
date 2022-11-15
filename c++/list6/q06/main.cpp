#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

int main()
{
    Cachorro c1("Rex", "Pitbull");
    c1.caminha("Rex");
    cout << c1.late() << endl;
    Gato g1("Mia", "Ashera");
    g1.caminha("Mia");
    cout << g1.mia() << endl;
    
    return 0;
}