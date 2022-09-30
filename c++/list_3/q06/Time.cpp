#include <iostream>
using std::cout;
using std::endl;
using std::string;

//biblioteca que permite alguns controles sobre a saída
#include <iomanip>
using std::setfill; 
using std::setw;

#include "Time.h"


Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
}

//forma 2
inline void Time::setMinute(int m)
{
  minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
}


void Time::tick(string mudar)
{ 
  if(mudar == "s"){
    setSecond(second + 1);
    if (second == 60){
      setMinute(minute + 1);
      setSecond(0);
      if (minute == 60){
        setHour(hour + 1);
        setMinute(0);
        if (hour == 24){
          setHour(0);
        }
      }
  }
  else if(mudar == "m"){
    setMinute(minute + 1);
    if (minute == 60){
      setHour(hour + 1);
      setMinute(0);
      if (hour == 24){
        setHour(0);
      }
    }
  }
  else if(mudar == "h"){
    setHour(hour + 1);
    if (hour == 24){
      setHour(0);
      }
  }
}
  else{
    cout << "Opção inválida" << endl;
  }
}

void Time::printUniversal()
{
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
  cout << "hora padrão americana: "<<( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}

void Time::printIncremento(string incrementar)
{
  if (incrementar == "m")
  {
    tick("m");
    cout << "Depois de implementar o minuto " << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;

  }
  else if (incrementar == "h")
  {
    tick("h");
    cout << "Depois de implementar o hora " << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;

  }
  else if (incrementar == "s")
  {
    tick("s");
    cout << "Depois de implementar o dia  " << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;

  }
  else
  {
    cout << "Erro: opção inválida" << endl;
  }
  

}