#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int grade;
};
int main() {
    Student s[3];
    for (int i = 0; i < 3; i++) {
        cout << "Ім'я: "; cin >> s[i].name;
        cout << "Оцінка: "; cin >> s[i].grade;
    }
    cout << "Студенти з оцінкою > 90:
";
    for (int i = 0; i < 3; i++)
        if (s[i].grade > 90) cout << s[i].name << endl;
}