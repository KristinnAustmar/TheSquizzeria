#include <string.h>
Topping::Topping()
{
    //ctor
}

Topping::Topping(char *name, double price);
    strcpy(this->name, name);
    this->price = price;

Topping::~Topping()
{
    //dtor
}
ostream& operator << (ostream& out, const Topping& topping){

    out << topping.name << " " << topping.price << endl;
}
    return out;
}
