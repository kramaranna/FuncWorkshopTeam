#include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Введіть 5 чисел: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "Мінімум: " << minVal << ", Максимум: " << maxVal;
}