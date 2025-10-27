#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Введіть число: ";
    cin >> n;
    bool isPrime = true;
    if (n < 2) isPrime = false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) isPrime = false;
    if (isPrime) cout << "Просте число";
    else cout << "Не просте число";
}