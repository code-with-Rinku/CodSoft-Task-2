#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double x, double y) {
        return x + y;
    }
    double sub(double x, double y) {
        return x - y;
    }
    double mul(double x, double y) {
        return x * y;
    }
    double div(double x, double y) {
        if (y != 0) {
            return x / y;
        } else {
            cout << "Error! Division by 0 is not allowed!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator obj;
    double first, second;
    int choice;

    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;

    do {
        cout << "\n==== Calculator Menu ====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Enter new numbers\n";
        cout << "6. Exit\n";
        cout << "Choose your option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << first << " + " << second << " = " << obj.add(first, second) << endl;
                break;
            case 2:
                cout << first << " - " << second << " = " << obj.sub(first, second) << endl;
                break;
            case 3:
                cout << first << " * " << second << " = " << obj.mul(first, second) << endl;
                break;
            case 4:
                cout << first << " / " << second << " = " << obj.div(first, second) << endl;
                break;
            case 5:
                cout << "Enter new first number: ";
                cin >> first;
                cout << "Enter new second number: ";
                cin >> second;
                break;
            case 6:
                cout << "Thanks for using the calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}

