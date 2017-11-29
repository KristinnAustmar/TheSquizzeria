#include <iostream>
using namespace std;

char get_position(){
// Create user variables for the menu
    char manager, baker, cashier, distri, position;
    manager = 'm';
    baker = 'b';
    cashier = 'c';
    distri = 'd';
    // Format:
    cout << "||========================================|| " << endl;
    cout << "||                 WELCOME                || " << endl;
    cout << "||                                        || " << endl;
    cout << "||========================================|| " << endl;
    cout << "||                                        || " << endl;
    cout << "||                                        || " << endl;
    cout << "||        MANAGER         =>   m          || " << endl;
    cout << "||                                        || " << endl;
    cout << "||        BAKER           =>   b          || " << endl;
    cout << "||                                        || " << endl;
    cout << "||        CASHIER         =>   c          || " << endl;
    cout << "||                                        || " << endl;
    cout << "||        DISTRIBUTER     =>   d          || " << endl;
    cout << "||                                        || " << endl;
    cout << "||========================================|| " << endl;
    cout << "||                                        || " << endl;
    cout << "||        PLEASE STATE YOUR PURPOSE       || " << endl;
    cout << endl;
    // Here the user is asked for the user purpose/staff position
    while(true){
         cin >> position;
    if(position == 'm' || position == 'M'){
        cout << "||========================================|| " << endl;
        cout << "||              WELCOME MANAGER           || " << endl;
        cout << "||========================================|| " << endl;
    }
    else if(position == 'b' || position == 'B'){
        cout << "||========================================|| " << endl;
        cout << "||              WELCOME BAKER             || " << endl;
        cout << "||========================================|| " << endl;
    }
    else if(position == 'c' || position == 'C'){
        cout << "||========================================|| " << endl;
        cout << "||              WELCOME CHASIER           || " << endl;
        cout << "||========================================|| " << endl;
    }
    else if(position == 'd' || position == 'D'){
        cout << "||========================================|| " << endl;
        cout << "||              WELCOME DISTRIBUTION      || " << endl;
        cout << "||========================================|| " << endl;
    }
    else {
        cout << "EHHHHH WRONG!! GET A LIFE LOSER!";
    }

  return position;  }
}
void manager_opt(int opt){
    if( opt == 1){
        cout << "PRICES PRICES PRICES";
    }
    else if(opt == 2){
        cout << "TOPPINGS TOPPINGS TOPPINGS";
    }
}
int main(){
    int opt;
   char position = get_position();
   if(position == 'm' || position == 'M'){
        cout << "||========================================|| " << endl;
        cout << "||     WHAT WOULD YOU LIKE TO DO TODAY?   || " << endl;
        cout << "||========================================|| " << endl;
        cout << " PLEASE ENTER A NUMBER FOR THE GIVEN OPTIONS" << endl;
        cout << "1: SET PRICES" << endl;
        cout << "2: SET AVALABLE TOPPINGS" << endl;
        cin >> opt;
    }
    else if(position == 'b' || position == 'B'){

    }
    else if(position == 's' || position == 'S'){

    }
    else if(position == 'd' || position == 'D'){

    }


    return 0;
}
