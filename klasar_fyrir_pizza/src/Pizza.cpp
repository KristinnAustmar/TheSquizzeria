#include "Pizza.h"
#include <stddef.h>

Pizza::Pizza()
{
    toppingCount = 0;
    toppings = NULL;
    currentToppingNum = 0;
}

Pizza::Pizza(int numberOfToppings){

    toppingCount = numberOfToppings;
    toppings = new Topping[toppingCount];
    currentToppingNum = 0;
}
Pizza::~Pizza()
{
   if(toppings != NULL){
    delete[] toppings;
   }
}
void Pizza:: addTopping(Topping topping){
    if(int currentToppingNum < toppingCount){
        toppings[] = topping;
    }

}

ostream& operator << (ostream& out, const Pizza& pizza){
    out << "Pizza wih the toppings " << endl;
    for(int i  =0; i < pizza.toppingCount; i++){
        out << pizza.toppings[i] << endl;
  }
    return out;
}
istrem& operator >> (istream& in, Pizza& pizza){
    cout << "Enter number of Toppings: ";
    in
    return in;
}
