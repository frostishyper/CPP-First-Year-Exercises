#include <iostream>
using namespace std;

int main () {
    char intial;
    string firstname = "Lee Esrey";
    string lastname = "Calupcupan";

    cout << "Please Enter Your Middle Intial (I.E 'R')" << endl << endl;

    cin >> intial;

    cout << firstname + " " + intial +  " " + lastname << endl << endl;

    system("pause");
    return 0;
}