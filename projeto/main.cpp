#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Ator.h"
#include "Diretor.h"
#include "Filme.h"
#include "Series.h"
#include "Streaming.h"
#include "Time.h"
#include "SmartTV.h"
#include "App.h"
#include <vector>

using namespace std;

int main() {
    SmartTV tv("Samsung", "QLED", "Android");
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
    
    Ator a2("Al pacino", "50 anos");
    Ator a3("Marlon Brando", "60 anos");
    Ator a4("Robert De Niro", "70 anos");
    Ator a5("James Caan", "40 anos");
    Ator a6("Diane Keaton", "30 anos");
    Ator a7("Talia Shire", "20 anos");
    Ator a8("John Cazale", "10 anos");
    
    vector<Diretor> diretores{d2};
    vector<Ator> atores{a2, a3, a4, a5, a6, a7, a8};
    
    Filme f1("O Poderoso Chefão", atores, diretores, 175, "Filme");
    Filme f2("O Poderoso Chefão 2", atores, diretores, 200, "Filme");
    
    netflix << f1;
    netflix << f2;
    tv << netflix;
    tv << h1;
    tv.run();
    
    return 0;
}