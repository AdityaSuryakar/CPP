//Exp 1.a(Perform basic Arithmetic Operator)
#include <iostream>
using namespace std;
int main() {
    int a, b;
    char op;
	cout << "Enter first number: ";
    cin >> a ;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
	cout << "Enter second number: ";
    cin >> b ;
    switch(op) {
        case '+':
            cout << "Addition: " << a + b << endl;
            break;
        case '-':
            cout << "Subtraction: " << a - b << endl;
            break;
        case '*':
            cout << "Multiplication: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Division: " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case '%':
            if (b != 0)
                cout << "Modulus: " << a % b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}
