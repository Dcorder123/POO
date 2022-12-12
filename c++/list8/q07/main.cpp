#include <iostream>
#include <stdexcept>

#include "error.h"

using std::cerr;
using std::runtime_error;

bool teste(){
  if(true){
    throw terceiro();
  }
  
};

bool teste2(){
  if(true){
    throw segunda();
  }
  
};

int main() {
  
  try{
    teste();
  }catch(runtime_error &e){
    cerr << " exemplo 1 " <<e.what()<<std::endl;
  }

  try{
    teste2();
  }
  catch(runtime_error &e){
    cerr<<" exemplo 2 "<<e.what()<<std::endl;
  }

  return 0;
}