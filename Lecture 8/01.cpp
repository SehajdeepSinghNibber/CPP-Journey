
#include <bits/stdc++.h>
using namespace std;

int main() {

    int num;

    cout << "Enter a number (1-5): ";
    cin >> num;

    switch (num) {

        case 1:
            cout << "One" << endl;
            break;

        case 2:
            cout << "Two" << endl;
            break;

        case 3:
            cout << "Three" << endl;
            // No break here: demonstrates fall-through

        case 4:
            cout << "Four" << endl;
            break;

        case 5:
            cout << "Five" << endl;
            break;

        default:
            cout << "Invalid number!" << endl;
            break;
    }

    // Grouping multiple cases
    char grade;

    cout << "\nEnter your grade (A, B, C): ";
    cin >> grade;

    switch (grade) {

        case 'A':
        case 'B':
            cout << "Excellent!" << endl;
            break;

        case 'C':
            cout << "Good job!" << endl;
            break;

        default:
            cout << "Grade not recognized." << endl;
            break;
    }

    // Switch with characters
    char operation;

    cout << "\nEnter an operator (+, -, *, /): ";
    cin >> operation;

    double a = 10, b = 5;

    switch (operation) {

        case '+':
            cout << a + b << endl;
            break;

        case '-':
            cout << a - b << endl;
            break;

        case '*':
            cout << a * b << endl;
            break;

        case '/':
            if (b != 0)
                cout << a / b << endl;
            else
                cout << "Cannot divide by zero!" << endl;
            break;

        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    // Nested switch
    int category = 1;
    int choice = 2;

    switch (category) {

        case 1:
            cout << "\nCategory 1 selected." << endl;

            switch (choice) {
                case 1:
                    cout << "Choice 1" << endl;
                    break;

                case 2:
                    cout << "Choice 2" << endl;
                    break;

                default:
                    cout << "Invalid choice" << endl;
                    break;
            }

            break;

        default:
            cout << "Invalid category" << endl;
            break;
    }

    return 0;
}
