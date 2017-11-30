#include <iostream>
#include <fstream>
#include "Topping.h"
using namespace std;

int main()
{
// make variables
char answer;
string str;
ifstream fin;
ifstream finb;
ofstream foutb;
ofstream fout;
// create and open the binary file
foutb.open("binary_file01.dat", ios::binary|ios::app);
// create and open the txt file
fout.open("toppingText.txt", ios::app);
// call topping
Topping topping;
cout << "WELCOME MANAGER" << endl;

// do while loop that asks user for toppings info until user
// sets answer to n
//saves the input in both txt as well as a dat file (binary)
do{
    cin >> topping;
    fout << topping;
    fout.write((char*)(&topping), sizeof(Topping));

    cout << "Create more toppings? (y/n)";
    cin >> answer;
}while(answer == 'y');
cout << "reading from binary:" << endl;
fin.read((char*)(&topping), sizeof(Topping));

fout.close();

    return 0;
}
