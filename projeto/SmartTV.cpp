#include <iostream>
#include <string>
#include <fstream>
#include "SmartTV.h"
#include "App.h"
#include "Time.h"
#include "Estado.h"
#include <exception>
#include <vector>
#include <sstream>
#include <iomanip>
#include <algorithm>

using std::left, std::right;

#include <iomanip>
using std::setw;
using std::setfill;
using std :: cout;
using std :: endl;
using std :: string;
using std :: vector;
using std :: ifstream;
using std :: ofstream;
using std :: ios;
using std :: cin;
using std :: ostream;
using std :: istream;
using std :: streamsize;
using std :: tolower;
using std :: toupper;




SmartTV::SmartTV(string marca, string modelo, string versao_so): marca(marca), modelo(modelo), versao_so(versao_so){
    ligada = false;
}
SmartTV &operator << (SmartTV &s, App &a)
{
    s.apps.push_back(&a);
    return s;
}
SmartTV &operator >> (SmartTV &s, App &a)
{
    for(int i = 0; i < s.apps.size(); i++)
    {
        if(s.apps[i] == &a)
        {
            s.apps.erase(s.apps.begin() + i);
        }
    }
    return s;
}

void SmartTV::run(string nome)
{
    menu();
    
}

void SmartTV::exibirApps()
{
    if(ligada)
    {
        while (true)
        {
            cout << "-----------------------------------------------" << endl;
            cout << endl <<"Apps instalados: " << endl;
            cout << "Escolha um app: " << endl;
            cout << right;
            cout.fill('|');
            cout << "-1 - Voltar " << endl;
            
            for(int i = 0; i < apps.size(); i++)
            {
                cout << setw(2) << i << " - " << apps[i]->getNome() << endl;
            }
            
            string nome;
            cout << "99 - Desligar " << endl;  
            cout << "Digite a opcao: ";
            try {
            // Lê a string do usuário
            getline(cin, nome);
            //cin >> nome;
            if (nome == "99")
            {
                desligar();
            }
            else if (nome == "-1")
            {
                menu();
            }
            // Verifica se a string está vazia
            if (nome.empty()) {
            throw std::runtime_error("A string está vazia");
            }
            for (int i = 0; i < nome.length();i+=1){
                if (isdigit(nome[i])){
                    throw std::invalid_argument("A string é um nome ou número inválido");
                }
            }

            // Verifica se a string é um número válido
            if (!std::all_of(nome.begin(), nome.end(), ::isdigit)) {
            throw std::invalid_argument("A string é um nome ou número inválido");
            }

            } 
            catch (std::runtime_error& e) {
            // Trata a exceção de string vazia
            std::cout << "Erro: " << e.what() << std::endl;
            } 
            catch (std::invalid_argument& e) {
            // Trata a exceção de string inválida
            std::cout << "Erro: " << e.what() << std::endl;
            }
            
            for(int i = 0; i < apps.size(); i++)
            {
            if(nome == apps[i]->getNome())
                {
                apps[i]->run();
                }
            }   
        }
    }

    else if (!ligada)
    {
        cout << endl << "-------------------" << endl;
        cout << "A TV esta desligada" << endl;
        cout << "-------------------" << endl<< endl;
    }
}



void SmartTV::ligar()
{
    ligada = true;
    cout << "=================" << endl;
    cout << "A TV foi ligada" << endl;
    cout << "=================" << endl;
    
    
    
}

void SmartTV::desligar()
{
    ligada = false;
    cout << "A TV foi desligada" << endl;
    cout << "-------------------" << endl;
    exit (0);
}

void SmartTV::menu()
{
    while (true)
    {
        /* code */
        cout << "                      Menu" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "1 - Ligar" << endl;
    cout << "2 - Desligar" << endl;
    cout << "3 - Exibir apps" << endl;
    string opcao;
    bool opcaoValida = false;
    
    while (!opcaoValida)
    {
    cout << "Escolha uma opcao: ";
    cin >> opcao;
    if (opcao == "1")
    {
        opcaoValida = true;
        this->ligar(); 
    }
    else if (opcao == "2")
    {
        opcaoValida = true;
        this->desligar();
    }
    else if (opcao == "3")
    {
        opcaoValida = true;
        this->exibirApps();
    }
    else
    {   
        cout << "Opcao invalida" << endl;
        opcaoValida = false;
        }
        }
    }
    
}

void SmartTV::exibirAppsInstalados()
{
    cout << "Apps instalados: " << endl;
    for(int i = 0; i < apps.size(); i++)
    {
        cout << apps[i]->getNome() << endl;
        
    }
}







// Path: projeto/SmartTV.h
