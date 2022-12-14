//impede que múltiplas inclusões ocorram
#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
#include "App.h"

class Time : public App
{
public:
  Time(string, string ) : App(nome, versao) {
    time_t t = time(0);
    struct tm * now = localtime( & t );
    setTime( (now->tm_hour),(now->tm_min),(now->tm_sec));
  }

  //funções set
  void setTime(int , int, int); //protótipo

  //forma 1
  inline void setHour( int );

  //forma 2 - ver arquivo cpp
  void setMinute( int );

  //forma 3
  void setSecond( int s ){
    second = (s >= 0 && s < 60) ? s : 0;
  }
  

  //funções get

  //forma 4
  inline int getHour() {return hour;}
  inline int getMinute() {return minute;}
  inline int getSecond() {return second;}

  void printUniversal();
  void printStandard();
  
  virtual void run();

private:
  int hour;
  int minute;
  int second;
};

#endif