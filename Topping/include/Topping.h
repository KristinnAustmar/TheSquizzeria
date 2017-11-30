#ifndef TOPPING_H
#define TOPPING_H
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class Topping
{
    public:
        Topping();
        Topping(string name, int price);

        friend istream& operator >>(istream& out, Topping& topping);
        friend ostream& operator <<(ostream& out, const Topping& topping);

    protected:

    private:
        string name;
        int price;
};

#endif // TOPPING_H
