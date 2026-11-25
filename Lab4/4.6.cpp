#include <iostream>
using namespace std;

int main() {
    int year;// ввод года
    cout << "Введите год: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { // вычисление високосности
        cout << "Високосный\n";
    } else {
        cout << "Не високосный\n"; // вывод
    }

    return 0;
}