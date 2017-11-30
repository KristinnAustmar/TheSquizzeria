#include <iostream>
#include <fstream>
#include "mainui.h"
#include "pizzaui.h"
using namespace std;

MainUI::MainUI()
{
    //ctor
}

MainUI::~MainUI()
{
    //dtor
}

void MainUI::startUI(){

    char selection ='\0';
    while(selection != 'q'){
        cout << "m: make Pizza" << endl;
        cout << "w: write" << endl;
        cout << "r: read" << endl;
        cout << "q: quit" << endl;

        cin >> selection;
        if(selection = 'm'){
            PizzaUI pizzaui;
            pizzaui.startUI();
        }
        if(selection == 'w'){

        }
        else if(selection == 'r'){

        }

        }
    }

