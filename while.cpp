#include <iostream>
using namespace std;

int main() {
    int n, i = 1, oddSum = 0;

    cout << "Enter a number N: ";
    cin >> n;

    while (i <= n) {
        if (i % 2 != 0) {   // check if odd
            oddSum += i;
        }
        i++;
    }

    cout << "Sum of odd numbers from 1 to " << n << " = " << oddSum << endl;

    return 0;
}
