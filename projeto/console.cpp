#include "console.h"
#include "Save.h"
#include "SmartTV.h"
#include "App.h"
#include "Producao.h"
#include "Streaming.h"
#include "Time.h"
#include "Pessoa.h"
#include "Ator.h"
#include "Diretor.h"
#include "Estado.h"
#include "Series.h"
#include "Filme.h"
#include <ostream>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

Console::Console()
{
    //ctor
}

void Console::run(vector<SmartTV> smartTVs)
{
    int opcao;
    bool sair = false;

    while(!sair)
    {
        for (int i = 0; i < smartTVs.size(); i++)
        {
            cout << i << " - " << smartTVs[i].getMarca() << " " << smartTVs[i].getModelo() << endl;
        }
        cout << "Digite o numero da TV que deseja acessar: ";
        cin >> opcao;
        /*carregando dados*/
        save.carregarDados();
        if (opcao == -1)
        {
            sair = true;
        }
        else
        {
            smartTVs[opcao].run();
        }
}
}


void Console::main()
{

    /*criando tv*/
    SmartTV tv("Samsung", "QLED", "Android");
    
    /*criando streaming*/
    Streaming netflix("Netflix", "Brasil");
    Streaming disney("Disney+", "Brasil");
    Streaming amazon("Amazon Prime", "Brasil");

    Hora h1;
    Diretor d2("Francis Ford Coppola", 27);
    Diretor teste("teste", 30);
    Diretor d3("Martin Scorsese", 30);
    Diretor d4("Steven Spielberg", 40);
    Diretor d5("Quentin Tarantino", 20);
    Diretor d6("Christopher Nolan", 10);
    Diretor d7("James Cameron", 15);
    Diretor d8("Bryan Cranston", 5);
    
    /*criando atores*/
    Ator a2("Al pacino", "50 anos");
    Ator a3("Marlon Brando", "60 anos");
    Ator a4("Robert De Niro", "70 anos");
    Ator a5("James Caan", "40 anos");
    Ator a6("Diane Keaton", "30 anos");
    Ator a7("Talia Shire", "20 anos");
    Ator a8("John Cazale", "10 anos");
    Ator a9 ("Leonardo DiCaprio", "28 anos");
    Ator a10 ("Brad Pitt", "50 anos");
    Ator a11 ("Tom Hanks", "60 anos");
    Ator a12 ("Morgan Freeman", "70 anos");
    Ator a13 ("Jordan Belfort", "5 anos");
    Ator a14 ("jonah hill",  "16 anos");
    Ator a15 ("Cristin Milioti", "20 anos");
    Ator a16 ("Jon Favreau", "30 anos");
    Ator a17 ("Robert Downey Jr.", "40 anos");
    Ator a18 ("Matthew McConaughey", "32 anos");
    Ator a19 ("Steve Carell", "34 anos");
    Ator a20 ("John Krasinski", "23 anos");
    Ator a21 ("Jenna Fischer", "25 anos");
    Ator a22 ("Rainn Wilson", "26 anos");


    /*criando vetores de atores e diretores*/
    vector<Diretor> diretores{d2};
    vector<Diretor> diretores2{d3};
    vector<Diretor> diretores3{d8};

    vector<Ator> atores{a2, a3, a4, a5, a6, a7, a8};
    vector<Ator> atores2{a9, a13, a14, a15, a16, a18};
    vector<Ator> atores3{a19, a20, a21, a22};
    
    /*criando filmes*/
    Filme f1("O Poderoso Chefão", atores, diretores, 175, "Filme");
    Filme f2("O Poderoso Chefão 2", atores, diretores, 200, "Filme");
    Filme f3("the wolf of wall street", atores2, diretores2, 180, "Filme");

    /*criando series*/
    Series s1("The office", atores3, diretores3, 30, "Serie");

    /*adicionando filmes e series em streaming*/    
    netflix << f1;
    netflix << f2;
    amazon << f3 << s1;
    /*adicionando streaming em tv*/
    tv << h1
        << netflix
        << disney
        << amazon;
    /*criando vetor de producoes*/
    vector<Producao*> producoes{&f1, &f2, &f3, &s1};
    /*criando vetor de apps*/
    vector<App*> apps{&netflix, &disney, &amazon};

    /*criando vetor de diretores todos*/
    vector<Diretor> diretoresTodos{d2, d3, d4, d5, d6, d7, d8};
    /*criando vetor de atores todos*/
    vector<Ator> atoresTodos{a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22};
    /*crioando vetor de tvs*/
    vector<SmartTV> tvs{tv};

    /*criando objeto save*/
    Save save;
    /*salvando dados*/
    save.salvarDados(apps, producoes, atoresTodos, diretoresTodos, tvs);
    Console console;
    console.run(tvs);
}