void printPrimes(int N) {
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
