#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++ calculator" << endl;
    float a = 0, b = 0;
    char opr;
    cout << "Enter a first number: ";
    cin >> a;
    cout << "Enter the operation which you would like to perform: ";
    cin >> opr;
    cout << "Enter the second number: ";
    cin >> b;
    switch (opr){
        case '+':
            cout << a << "+" << b << "=" << a + b;
            break;
        case '-':
            cout << a << "-" << b << "=" << a - b;
            break;
        case '*':
            cout << a << "*" << b << "=" << a * b;
            break;
        case '/':
            if (b != 0)
                cout << a << "/" << b << "=" << a / b;
            else
                cout << "ERROR, It's not possible to divide by zero" << endl;
            break;
        case '%':
            if (a > b){
                cout << (int)b % (int)a;
            }
            else if ( a < b){
                cout << (int)a % (int)b;
            }
            else {
                cout << "0";
            }
            break;
        default:
            cout << "Wrong input!";
    }
    return 0;
}
