//Lee RC
// Larry

#include <iostream>

using namespace std;

int main () {

    int input;
    const int SENTINEL = 1;

    do {
        cout << "Larry" << endl;
        cout << "Enter a number (or 1 to exit): ";
        cin >> input;
    } while (input != SENTINEL);

    system("pause");
    return 0;
}