#include <iostream>
using namespace std;
int main() {
    double hours, rate;
    cout << "Введіть кількість годин: ";
    cin >> hours;
    cout << "Введіть ставку: ";
    cin >> rate;
    double salary = hours * rate;
    if (hours > 40) salary += (hours - 40) * rate * 0.5;
    cout << "Зарплата: " << salary;
}