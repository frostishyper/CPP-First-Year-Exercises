//By Lee RC

#include <iostream>
#include <vector>
#include <limits> 
#include <iomanip> 

using namespace std;


void Calculations(const vector<int>& numbers) {
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    int sum = 0;
    int maxNum = numeric_limits<int>::min();
    int minNum = numeric_limits<int>::max();

    for (int num : numbers) {
        if (num % 2 == 0) {
            evenNumbers.push_back(num);
        } else {
            oddNumbers.push_back(num);
        }

        sum += num;
        if (num > maxNum) {
            maxNum = num;
        }
        if (num < minNum) {
            minNum = num;
        }
    }

    double average = numbers.empty() ? 0 : static_cast<double>(sum) / numbers.size();

    cout << "\nEven Numbers: ";
    for (int even : evenNumbers) {
        cout << even << " ";
    }
    cout << "\nOdd Numbers: ";
    for (int odd : oddNumbers) {
        cout << odd << " ";
    }
    cout << "\nSum: " << sum;
    cout << "\nAverage: " << fixed << setprecision(2) << average;
    cout << "\nMaximum: " << (maxNum == numeric_limits<int>::min() ? 0 : maxNum);
    cout << "\nMinimum: " << (minNum == numeric_limits<int>::max() ? 0 : minNum) << endl;
}

int main() {
    vector<int> numbers;
    int input;

    cout << "Enter integers (enter -1 to exit):" << endl;

    while (true) {
        cout << "> ";
        cin >> input;

        if (input == -1) {
            break; 
        }

        numbers.push_back(input); 
    }

    
    Calculations(numbers);

    cout << "Program terminated." << endl;
    system("pause");
    return 0;
}
