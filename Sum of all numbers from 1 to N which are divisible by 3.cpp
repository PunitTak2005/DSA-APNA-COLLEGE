#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {   // divisible by 3
            sum += i;
        }
    }

    cout << "Sum of numbers divisible by 3 from 1 to " << n << " = " << sum << endl;

    return 0;
}
