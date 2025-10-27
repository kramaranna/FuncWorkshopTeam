#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int n, arr[100], key;
    cout << "Введіть кількість елементів: ";
    cin >> n;
    cout << "Введіть елементи: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Введіть число для пошуку: ";
    cin >> key;
    int index = findElement(arr, n, key);
    if (index != -1)
        cout << "Елемент знайдено на позиції " << index + 1;
    else
        cout << "Елемент не знайдено.";
    return 0;
}