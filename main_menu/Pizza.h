#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>

using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();
    protected:
    private:

        string name;
        char topping;
        double price;
};

#endif // PIZZA_H
