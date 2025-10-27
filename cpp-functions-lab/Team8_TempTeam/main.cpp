#include <iostream>
using namespace std;
int main() {
    double c;
    cout << "Введіть температуру в Цельсіях: ";
    cin >> c;
    double f = c * 9 / 5 + 32;
    cout << "У Фаренгейтах: " << f;
}