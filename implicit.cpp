#include <iostream>
using namespace std;

int main(){
    double price = 100.99;

    int newprice = price;   //Implicit conversion from double to int
    cout << "The price is: " << newprice << endl; // Output: 100
    return 0;
}
