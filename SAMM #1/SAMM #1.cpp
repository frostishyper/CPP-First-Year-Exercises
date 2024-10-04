//Lee RC
#include<iostream>

using namespace std;

float num1, num2, num3, num4, num5;

void calculations () {
    float sum = num1 + num2 + num3 + num4 + num5;
    float average = sum / 5;
    float maxNum = max(max(max(num1, num2), max(num3, num4)), num5);
    float minNum = min(min(min(num1, num2), min(num3, num4)), num5);

    cout << endl << endl << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum: " << maxNum << endl;
    cout << "Minimum: " << minNum << endl;
}

int main () {
    cout << endl << endl << "Please Enter Number #1 :" << endl;
    cin >> num1;

    cout << "Please Enter Number #2 : " << endl << endl;
    cin >> num2;

    cout << "Please Enter Number #3 : " << endl << endl;
    cin >> num3;

    cout << "Please Enter Number #4 : " << endl << endl;
    cin >> num4;

    cout << "Please Enter Number #5 : " << endl << endl;
    cin >> num5;

    calculations();

    system("pause");
}
