#ifndef DATA_H
#define DATA_H

class Data
{
    public:
        Data(int, int, int);
        void setDia(int);
        void setMes(int);
        void setAno(int);
        int getDia();
        int getMes();
        int getAno();
        void mostrarData();
    private:
        int dia;
        int mes;
        int ano;
}; // fim da classe Data

#endif