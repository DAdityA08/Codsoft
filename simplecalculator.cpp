#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    bool validOperation = true;

    do {
        cout << "Enter operation (+, -, *, /, ^): ";
        cin >> operation;

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '^') {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (operation) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0)
                        result = num1 / num2;
                    else {
                        cout << "Error: Division by zero!" << endl;
                        validOperation = false;
                    }
                    break;
                case '^':
                    result = pow(num1, num2);
                    break;
            }

            if (validOperation)
                cout << "Result: " << result << endl;
        } else {
            cout << "Invalid operation! Please enter a valid operation." << endl;
        }

        // Clear input buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Do you want to perform another calculation? (y/n): ";
        char choice;
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            cout << "Exiting calculator..." << endl;
            break;
        }

        validOperation = true; // Reset flag for next iteration
    } while (true);

    return 0;
}
