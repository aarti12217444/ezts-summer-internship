
#include <iostream>
#include <cmath>

using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double natural_log(double value);
double log_base10(double value);
double power(double base, double exponent);
long long factorial(int n);

int main() {
    char operation;
    double num1, num2;
    int n;
    cout << "Enter an operator (+, -, *, /, ^, s, c, t, n, l, f): ";
    cin >> operation;

    double result;
    switch (operation) {
        case '+':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = add(num1, num2);
            break;
        case '-':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = subtract(num1, num2);
            break;
        case '*':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = multiply(num1, num2);
            break;
        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = divide(num1, num2);
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        case '^':
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            result = power(num1, num2);
            break;
        case 's':
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = sine(num1);
            break;
        case 'c':
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = cosine(num1);
            break;
        case 't':
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = tangent(num1);
            break;
        case 'n':
            cout << "Enter a value: ";
            cin >> num1;
            if (num1 > 0) {
                result = natural_log(num1);
            } else {
                cout << "Error: Natural logarithm of a non-positive number!" << endl;
                return 1;
            }
            break;
        case 'l':
            cout << "Enter a value: ";
            cin >> num1;
            if (num1 > 0) {
                result = log_base10(num1);
            } else {
                cout << "Error: Logarithm of a non-positive number!" << endl;
                return 1;
            }
            break;
        case 'f':
            cout << "Enter an integer: ";
            cin >> n;
            if (n >= 0) {
                result = factorial(n);
            } else {
                cout << "Error: Factorial of a negative number!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1;
    }

    cout << "The result is: " << result << endl;
    return 0;
}
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}

double natural_log(double value) {
    return log(value);
}

double log_base10(double value) {
    return log10(value);
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

