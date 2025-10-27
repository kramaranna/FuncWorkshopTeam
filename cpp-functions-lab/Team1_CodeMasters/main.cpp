#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;
    int sum = a + b + c;
    double avg = sum / 3.0;
    cout << "Сума: " << sum << endl;
    cout << "Середнє: " << avg << endl;
}