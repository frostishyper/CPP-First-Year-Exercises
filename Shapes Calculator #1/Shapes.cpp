//Shape Calculator By Lee RC

#include <iostream>
#include <cmath>

using namespace std;

void Rectangle () {

    float width;
    float length;
    float RectangleArea;

    cout << endl << "Please Enter The Rectangle's Width: ";
    cin >> width;

    cout << endl << "Please Enter The Rectangle's Length: ";
    cin >> length;

    RectangleArea = width * length;

    cout << endl << "Your Rectangle's Area Is: " << RectangleArea << endl;

}

void Circle () {
    
    float radius;
    float CircleArea;

    cout << endl << "Please Enter The Circle's Radius: ";
    cin >> radius;

    CircleArea = M_PI * radius * radius;

    cout << endl << "Your Circle's Area Is: " << CircleArea << endl;

}

void Triangle () {
    
    float base;
    float height;
    float TriangleArea;

    cout << endl << "Please Enter The Triangle's Base: ";
    cin >> base;

    cout << endl << "Please Enter The Triangle's Height: ";
    cin >> height;

    TriangleArea = base * height / 2;

    cout << endl << "Your Traingle's Area Is: " << TriangleArea << endl;

}

void Square () {
    
    float side;
    float SquareArea;

    cout << endl << "Please Enter The Square's Side: ";
    cin >> side;

    SquareArea = side * side;

    cout << endl << "Your Square's Area Is: " << SquareArea << endl;

}

int main() {
    char choice;

    do {
        cout << endl << "Welcome User!" << endl << endl;

        cout << "What Shape Would You Like To Know The Area Of?" << endl << endl;
        cout << "A. Rectangle" << endl;
        cout << "B. Circle" << endl;
        cout << "C. Triangle" << endl;
        cout << "D. Square" << endl;
        cout << "X. Exit" << endl << endl;

        cin >> choice;

        if (choice == 'A' || choice == 'a') {

            Rectangle();

        } else if (choice == 'B' || choice == 'b') {

            Circle();

        } else if (choice == 'C' || choice == 'c') {

            Triangle();

        } else if (choice == 'D' || choice == 'd') {

            Square();

        } else if (choice == 'X' || choice == 'x') {

            cout << "Exiting..." << endl;
            exit(0);

        } else {

            cout << "Input Was Not A Valid Choice" << endl << endl;

        }

    } while (choice != 'X' && choice != 'x'); 

    return 0;
}




