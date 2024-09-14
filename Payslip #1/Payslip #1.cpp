//Payslip By Lee RC

#include <iostream>
#include <iomanip>

using namespace std;

struct Employee {

    string Name;
    string Adress;
    char Status;
    int Number;
    float Salary;

};

char ChosenEmployee;

Employee employee1;
Employee employee2;
Employee employee3;
Employee employee4;
Employee employee5;

void InitializeEmployee() {

employee1.Name = "Renier Lopez";
employee1.Adress = "Makati City";
employee1.Status = 'S';
employee1.Number = 101;
employee1.Salary = 4500;

employee2.Name = "Dan Cortez";
employee2.Adress = "Malabon City";
employee2.Status = 'S';
employee2.Number = 102;
employee2.Salary = 12100;

employee3.Name = "Paul Luna";
employee3.Adress = "Caloocan City";
employee3.Status = 'M';
employee3.Number = 103;
employee3.Salary = 18300;

employee4.Name = "Joseph Victoria";
employee4.Adress = "Valenzuela City";
employee4.Status = 'M';
employee4.Number = 104;
employee4.Salary = 8200;

employee5.Name = "Lorie Reyes";
employee5.Adress = "Pasay City";
employee5.Status = 'S';
employee5.Number = 105;
employee5.Salary = 20800;

}


void Payroll (const Employee& emp) {

    cout << endl << "Employee Name: " << emp.Name << endl;
    cout << "Address: " << emp.Adress << endl;
    cout << "Status: " << emp.Status << endl;
    cout << "Number: " << emp.Number << endl;
    cout << "Salary: $" << fixed << setprecision(2) << emp.Salary << endl << endl;

    float baseSalary = emp.Salary;
    float taxPercentage = 0.0;
    float taxAmount = 0.0;
    float netPay = 0.0;

    if (emp.Status == 'S' || emp.Status == 's') { // Single
        if (baseSalary <= 4999) taxPercentage = 0.0;
        else if (baseSalary <= 10000) taxPercentage = 13.0;
        else if (baseSalary <= 15000) taxPercentage = 16.0;
        else if (baseSalary <= 20000) taxPercentage = 19.0;
        else taxPercentage = 23.0;
    } 
    else if (emp.Status == 'M' || emp.Status == 'm') { // Married
        if (baseSalary <= 4999) taxPercentage = 0.0;
        else if (baseSalary <= 10000) taxPercentage = 11.0;
        else if (baseSalary <= 15000) taxPercentage = 13.0;
        else if (baseSalary <= 20000) taxPercentage = 15.0;
        else taxPercentage = 18.0;
    }

    taxAmount = (baseSalary * taxPercentage) / 100;
    netPay = baseSalary - taxAmount;

    cout << endl << "Payroll Breakdown:" << endl;
    cout << "Base Salary: $" << fixed << setprecision(2) << baseSalary << endl;
    cout << "Contributions: $0" << endl;
    cout << "Tax Bracket Percentage: " << taxPercentage << "%" << endl;
    cout << "Tax Amount: $" << fixed << setprecision(2) << taxAmount << endl;
    cout << "Net Pay: $" << fixed << setprecision(2) << netPay << endl <<endl;

    cout << "Press Enter to return to the menu...";
    cin.get();

}


int main() {
    InitializeEmployee();
    char ChosenEmployee;

    while (true) {
        cout << endl << "Welcome To Company Employee Payslip System" << endl;
        cout << "Please Select Employee: " << endl;
        cout << "A. Renier Lopez" << endl;
        cout << "B. Dan Cortez" << endl;
        cout << "C. Paul Luna" << endl;
        cout << "D. Joseph Victoria" << endl;
        cout << "E. Lorie Reyes" << endl;
        cout << "X. Exit" << endl << endl;

        cin >> ChosenEmployee;
        cin.ignore();

        if (ChosenEmployee == 'A' || ChosenEmployee == 'a') {

            Payroll(employee1);

        }
        else if (ChosenEmployee == 'B' || ChosenEmployee == 'b') {

            Payroll(employee2);

        }
        else if (ChosenEmployee == 'C' || ChosenEmployee == 'c') {

            Payroll(employee3);

        }
        else if (ChosenEmployee == 'D' || ChosenEmployee == 'd') {

            Payroll(employee4);

        }
        else if (ChosenEmployee == 'E' || ChosenEmployee == 'e') {

            Payroll(employee5);

        }
        else if (ChosenEmployee == 'X' || ChosenEmployee == 'x') {

            cout << "Exiting program..." << endl;
            break;  

        }
        else {

            cout << endl << "Input Is An Invalid Choice!" << endl;

        }
    }

    return 0;
}