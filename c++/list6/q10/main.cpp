#include <iostream> 
#include <string>
#include "Cliente.h"
using namespace std;

int main()
{
    Cliente c1("Joao", "123.456.789-00", "Rua 1", "1234-5678");
    cout << c1;
    Cliente c2("Maria", "987.654.321-00", "Rua 2", "8765-4321");
    cout << c2;
    return 0;
}