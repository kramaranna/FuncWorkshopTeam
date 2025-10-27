#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[5];
    cout << "Введіть 5 чисел: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];
    sort(arr, arr + 5);
    double mean = 0;
    for (int i = 0; i < 5; i++) mean += arr[i];
    mean /= 5;
    cout << "Середнє: " << mean << ", Медіана: " << arr[2];
}