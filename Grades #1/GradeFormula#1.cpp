#include <iostream>
#include <cstdlib>

using namespace std;
float quiz1, quiz2, lab1, lab2, major, finalGrade;

void term() {
    cout << "ERROR! Invalid Entry, Exceeding Or Going Under Specified Bounds" << endl << endl;
    system("pause");
    exit(EXIT_FAILURE);
}

int main() {

    cout << "WELCOME TO GRADE CALCULATOR" << endl << endl;

    cout << "Please Enter Quiz 1 Score Out of 100" << endl << endl;
    cin >> quiz1;
    if (quiz1 > 100) {
        term();
    } else if (quiz1 < 0) {
        term();
    }

    cout << "Please Enter Quiz 2 Score Out of 100" << endl << endl;
    cin >> quiz2;
    if (quiz2 > 100) {
        term();
    } else if (quiz2 < 0) {
        term();
    }

    cout << "Please Enter Lab 1 Score Out of 100" << endl << endl;
    cin >> lab1;
    if (lab1 > 100) {
        term();
    } else if (lab1 < 0) {
        term();
    }

    cout << "Please Enter Lab 2 Score Out of 100" << endl << endl;
    cin >> lab2;
    if (lab2 > 100) {
        term();
    } else if (lab2 < 0) {
       term();
    }

    cout << "Please Enter Major Exam Score Out of 50" << endl << endl;
    cin >> major;
    if (major > 50) {
        term();
    } else if (major < 0) {
        term();
    }

    finalGrade = (quiz1 * 0.15 + quiz2 * 0.15) + (lab1 * 0.15 + lab2 * 0.15) + (major * 0.40 * 2); 

    cout << "Your final grade is: " << finalGrade << endl;

    if (finalGrade >= 75) {
        cout << "You passed!" << endl;
    } else {
        cout << "You failed." << endl;
    }

    system("pause");
    return 0;
}

