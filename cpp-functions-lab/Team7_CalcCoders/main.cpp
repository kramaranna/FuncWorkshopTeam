#include <iostream>
using namespace std;
int main() {
    double a, b;
    char op;
    cout << "Введіть вираз (a + b): ";
    cin >> a >> op >> b;
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Невідомий оператор";
    }
}