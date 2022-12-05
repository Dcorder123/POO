#ifndef APP_H
#define APP_H
#include <iostream>
#include <string>

using namespace std;
class App
{
public:
    App();
    ~App();
    void setNome(string){this->nome = nome;}
    void setVersao(string){this->versao = versao;}
    string getNome(){return nome;}
    string getVersao(){return versao;}
    virtual void run() = 0;
protected:
    string nome;
    string versao;
};

#endif // APP_H