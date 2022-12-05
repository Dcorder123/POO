#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class PESSOA {

public:
    PESSOA(string = "", int = 0);
    string getName(){return name;}
    void setName(string);
    int getcpf(){return cpf;}
    void setcpf(int);
    void validatecpf();
    void print();

private:
    string name;
    int cpf;
};

#endif