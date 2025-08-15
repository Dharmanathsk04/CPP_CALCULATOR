#include<iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n============================\n";
        cout << "       CALCULATOR MENU      \n";
        cout << "============================\n";
        cout << " 1. Addition\n";
        cout << " 2. Subtraction\n";
        cout << " 3. Multiplication\n";
        cout << " 4. Division\n";
        cout << " 5. Exit\n";
        cout << "----------------------------\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            case 5:
                cout << "Exiting... Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
