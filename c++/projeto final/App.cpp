#include <iostream>
#include <string>
#include "App.h"

using namespace std;

App::App()
{
    setNome("App");
    setVersao("1.0");
}

App::~App()
{
    //dtor
}

void App::run()
{
    cout << "App::run()" << endl;
}

// Path: projeto final/App.h