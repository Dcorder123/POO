#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

using namespace std;

#include "App.h"
/*Classe Hora que herda da classe App
 contém o dia, mes, ano, hora, minuto e segundo
 tem o metodo imprimir que imprime o dia, mes, ano, hora, minuto e segundo
*/
class Hora : public App
{
    public:
        Hora();/*construtor da classe Hora*/
        Hora(int Dia, int Mes, int Ano, int hora, int minuto, int segundo);/*construtor da classe Hora*/
        void setDia(int Dia){this->Dia = Dia;} //seta o dia
        int getDia()const{return Dia;} //retorna o dia
        void setMes(int Mes){this->Mes = Mes;} //seta o mes
        int getMes()const{return Mes;} //retorna o mes
        void setAno(int Ano){this->Ano = Ano;} //seta o ano
        int getAno()const{return Ano;} //retorna o ano
        void setHora(int hora){this->hora = hora;} //seta a hora
        int getHora()const{return hora;} //retorna a hora
        void setMinuto(int minuto){this->minuto = minuto;} //seta o minuto
        int getMinuto()const{return minuto;} //retorna o minuto
        void setSegundo(int segundo){this->segundo = segundo;} //seta o segundo
        int getSegundo()const{return segundo;} //retorna o segundo
        void horaAtual(); //retorna a hora atual
        virtual void run() override;/*metodo virtual que imprime o dia, mes, ano, hora, minuto e segundo*/
        
    protected:
        int Dia; 
        int Mes;
        int Ano;
        int hora;
        int minuto;
        int segundo;
};

#endif
