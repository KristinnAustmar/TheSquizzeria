#include <iostream>
using namespace std;

char get_position(){
// Create user variables for the menu
    char manager, baker, salesperson, distri, position;
    manager = 'm';
    baker = 'b';
    salesperson = 's';
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
    else if(position == 's' || position == 'S'){
        cout << "||========================================|| " << endl;
        cout << "||              WELCOME SALESPERSON       || " << endl;
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
int main(){
   char position = get_position();


    return 0;
}
