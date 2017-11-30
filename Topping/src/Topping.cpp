#include "Topping.h"
#include <string>
using namespace std;

Topping::Topping()
{
  name = " ";
  price = 0;
}

Topping::Topping(string name, int price){
    this-> name = name;
    this-> price = price;
}


istream& operator >>(istream& in, Topping& topping){

    cout << "Please enter Toppings info: Name, then price" << endl;
   // cout << "Enter Name: ";
    in >> topping.name;
   // cout << "Enter Price: ";
    in >> topping.price;

    return in;

}
ostream& operator <<(ostream& out, const Topping& topping){
    out << topping.name << " ";
    out << topping.price << endl;
    return out;
}
