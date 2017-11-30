#include "PizzaUI.h"
#include <iostream>
#include "pizza.h"
#include "pizzaui.h"
using namespace std;

PizzaUI::PizzaUI()
{
    //ctor
}

PizzaUI::~PizzaUI()
{
    //dtor
}
void PizzaUI::startUI(){

    int topCount;
        cout << "HOW MANY TOPPINGS: ";
        cin >> topCount;

        Pizza pizza(topCount);

        for(int i = 0; i < topCount; i++){

            Topping topping;
            cin >> topping;
            pizza.addTopping(topping);

        }

        cout << pizza;
}


