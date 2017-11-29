#ifndef PIZZA_H
#define PIZZA_H
#include "topping.h"
#include <iostream>
using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(int numberOfToppings);
        virtual ~Pizza();

        void addTopping(Topping);

        friend istream& operator >>(istream& out, const Pizza& pizza);

        friend ostream& operator <<(ostream& out, const Pizza& pizza);

    protected:

    private:
        Topping *toppings;
        int toppingCount;

        int currentToppingNum;
};

#endif // PIZZA_H
