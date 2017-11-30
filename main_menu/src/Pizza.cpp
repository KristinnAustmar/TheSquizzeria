#include "Pizza.h"
#include <stddef.h>
using namespace std;

Pizza::Pizza()
{
    toppingCount = 0;
    toppings = NULL;
    int currentToppingNum = 0;
}

Pizza::Pizza(int numberOfToppings){

    toppingCount = numberOfToppings;
    toppings = new Topping[toppingCount];
    int currentToppingNum = 0;
}

Pizza::~Pizza()
{
    if(toppings != NULL){
        delete [] toppings;
       }
}

void Pizza::addTopping(Topping topping){

    if(currentToppingNum < toppingCount){
        toppings[currentToppingNum] = topping;
        currentToppingNum++;
    }

}
istream& operator >>(istream& in, const Pizza& pizza){

    cout << "How many toppings would you like? : ";


}
ostream& operator <<(ostream& out, const Pizza& pizza){
    //out << "Pizza with Toppings: " << endl;
    for(int i = 0; i < pizza.toppingCount; i++){
        out << pizza.toppings[i] << endl;
    }
    return out;
}

