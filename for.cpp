#include <iostream>
using namespace std;

int main() {
    int n, evenSum = 0;

    cout << "Enter a number N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {   // check if even
            evenSum += i;
        }
    }

    cout << "Sum of even numbers from 1 to " << n << " = " << evenSum << endl;

    return 0;
}
