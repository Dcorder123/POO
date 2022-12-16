#include <iostream>
#include <string>
#include <fstream>
#include "SmartTV.h"
#include "App.h"
#include "Time.h"
#include "Estado.h"

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

void SmartTV::run()
{
    estado.guardarEstado(0);
    while (true)
    {
        
        cout << "                      Menu" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "1 - Ligar" << endl;
        cout << "2 - Desligar" << endl;
        cout << "3 - Exibir apps" << endl;
        cout << "4 - Sair" << endl;
        int opcao;
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        if (cin.fail()) {
      // Limpar o estado de falha de entrada
        cin.clear();
        // Descartar o caractere inválido da entrada
        cin.ignore();
        std::cout << "Entrada inválida" << std::endl;
        continue;
        }

    if (opcao < 1 || opcao > 4) {
      std::cout << "Opcao inválida" << std::endl;
      continue;
    }

        switch (opcao)
        {
        case 1:
            this->ligar();
            break;
        case 2:
            this->desligar();
            break;
        case 3:
            estado.guardarEstado(1);
            this->exibirApps();
            break;
        case 4:
            return;
        default:
            cout << "Opcao invalida" << endl;
            break;
        }
    }
    
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
            for(int i = 0; i < apps.size(); i++)
            {
                cout << i << " - " << apps[i]->getNome() << endl;
            }
            double opcao;
            
            cout << "ou para voltar pra o menu de opções digite -1: " ;
            cin >> opcao;
            if (cin.fail()) {
        // Limpar o estado de falha de entrada
            cin.clear();
            // Descartar o caractere inválido da entrada
            cin.ignore();
            std::cout << "Entrada inválida" << std::endl;
            continue;
            }
            if (opcao >= 0 && opcao < apps.size())
            {
                apps[opcao]->run(estado);
            }
            else if(opcao == -1)
            {
                estado.removerEstado();
                return;
            }
            else if (opcao < 0 || opcao > apps.size()) {
            {
                cout << "****************" << endl;
                cout << "*"<< "Opcao invalida" << "*"<<endl;
                cout << "****************" << endl;
                continue;
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

bool SmartTV::salvarDados()
{
    ofstream arquivo;
    arquivo.open("dados.txt", ios::out);
    if(arquivo.is_open())
    {
        arquivo << "Marca: " << marca << endl;
        arquivo << "Modelo: " << modelo << endl;
        arquivo << "Versao do SO: " << versao_so << endl;
        arquivo << "Apps instalados: " << endl;
        for(int i = 0; i < apps.size(); i++)
        {
            arquivo << apps[i]->getNome() << endl;
        }
        arquivo.close();
        return true;
    }
    else
    {
        return false;
    }
}

bool SmartTV::carregarDados()
{
    ifstream arquivo;
    arquivo.open("dados.txt", ios::in);
    if(arquivo.is_open())
    {
        string linha;
        while(getline(arquivo, linha))
        {
            cout << linha << endl;
        }
        arquivo.close();
        return true;
    }
    else
    {
        return false;
    }
}

void SmartTV::ligar()
{
    ligada = true;
    cout << "A TV foi ligada" << endl;
    carregarDados();
    
}

void SmartTV::desligar()
{
    ligada = false;
    cout << "A TV foi desligada" << endl;
    salvarDados();
}
// Path: projeto/SmartTV.h
