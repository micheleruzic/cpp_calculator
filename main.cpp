#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++ calculator" << endl;
    int a = 0, b = 0, c = 0;
    char opr;
    cout << "Enter a first number: ";
    cin >> a;
    cout << "Enter the operation which you would like to perform: ";
    cin >> opr;
    cout << "Enter the second number: ";
    cin >> b;
    if (opr == '+'){
        c = a + b;
        cout << c;
    }
    else if (opr == '-'){
        c = a - b;
        cout << c;
    }
    else if (opr == '*'){
        c = a * b;
        cout << c;
    }
    else if (opr == '/'){
        c = a / b;
        cout << c;
    }
    else if (opr == '%'){
        c = a % b;
        cout << c;
    }
    else {
        cout << "Wrong operation!" << endl;
    }
    return 0;
}
