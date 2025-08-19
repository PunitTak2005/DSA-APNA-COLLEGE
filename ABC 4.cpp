#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char ch = 'A';  // starting alphabet

    for (int i = n; i >= 1; i--) {   // rows decrease
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;  // move to next letter
        cout << endl;
    }

    return 0;
}
