#include <iostream>
using namespace std;
int main() {
    int n, rev = 0, temp;
    cout << "Введіть число: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n) cout << "Паліндром";
    else cout << "Не паліндром";
}