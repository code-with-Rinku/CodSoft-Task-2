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
        return x / y;  
    }
};

int main() {
    int choice;
    Calculator obj;

    do {
        cout << "\n==== Calculator Menu ====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Choose your option: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            double first, second;
            cout << "Enter the first number: ";
            cin >> first;
            cout << "Enter the second number: ";
            cin >> second;

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
                    if (second == 0) {
                        cout << "Division by zero is not allowed.\n";
                    } else {
                        cout << first << " / " << second << " = " << obj.div(first, second) << endl;
                    }
                    break;
            }
        } else if (choice == 5) {
            cout << "Thanks for using the calculator. Goodbye!\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
