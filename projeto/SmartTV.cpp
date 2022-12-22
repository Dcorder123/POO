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
#include <cstring>
#include <cctype>
#include <functional>
using std::left, std::right;

#include <iomanip>

using namespace std;



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
            cout << "- Voltar " << endl;
            cout << "- Desligar " << endl;  
            
            for(int i = 0; i < apps.size(); i++)
            {
                cout << setw(2) << i+1 << " - " << apps[i]->getNome() << endl;
            }
            
            string nome;
            
            cout << "Digite o nome da opção: ";
            try {
            // Lê a string do usuário
            //getline(cin, nome);
            cin >> nome;
            nome[0] = toupper(nome[0]);
            if (nome == "Desligar")
            {
                desligar();
            }
            else if (nome == "Voltar")
            {
                menu();
            }
            // Verifica se a string está vazia
            if (nome.empty()) {
            throw std::runtime_error("A string está vazia");
            }
            for (int i = 0; i < nome.length();i+=1){
                if (isdigit(nome[i])){
                    throw std::runtime_error("\033[31mVocê digitou um número e não o nome do app \033[0m");
                    
                }
            }
            int sucess = 0;
            for (int i = 0; i < apps.size(); i++)
            {
                if(nome == apps[i]->getNome())
                {
                    apps[i]->run();
                    sucess = 1;
                }
                
            }
            if (sucess == 0)
            {
                throw std::runtime_error("\033[31mApp não encontrado\033[0m");
            }
            }

            catch (std::runtime_error& e) {
            // Trata a exceção de string vazia
            std::cout << "\033[31mErro: \033[0m" << e.what() << std::endl;
            } 
            catch (std::invalid_argument& e) {
            // Trata a exceção de string inválida
            std::cout << "\033[31mErro: \033[0m" << e.what() << std::endl;
            }
            
        }
    }

    else if (!ligada)
    {
        cout << endl << "-------------------" << endl;
        cout << "\033[35mA TV esta desligada\033[0m" << endl;
        cout << "-------------------" << endl<< endl;
    }
}



void SmartTV::ligar()
{
    ligada = true;
    cout << "=================" << endl;
    cout << "\033[35mA TV foi ligada\033[0m" << endl;
    cout << "=================" << endl;
    
    
    
}

void SmartTV::desligar()
{
    ligada = false;
    cout << "\033[35mA TV foi desligada\033[0m" << endl;
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
