//Lee RC
// Prime Numbers Using While Loop

#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int i = 1;
    while (i <= 100) {
        if (isPrime(i)) {
            cout << endl << i << " " << endl;
        }
        i++;
    }

    system("pause");
    return 0;
}