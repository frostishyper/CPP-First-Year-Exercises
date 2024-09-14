#include <iostream> 
using namespace std;

int main () {

    int grade;

    cout << "Please Enter Grade" << endl;

    cin >> grade;

    if (grade > 100 || grade < 0) {
        cout<<"Invalid Grade" << endl;
    }

    else if (grade >= 75) {
        cout<<"You Passed" << endl;
    }

    else if (grade < 75) {
        cout<<"You Failed" << endl;
    }
    else {
        cout<<"Invalid Entry" << endl;
    }


    system("pause");
    return 0;
}