#include <iostream>  // Подключаем ввод и вывод
#include <string>    // Подключаем строки
using namespace std;

int main() {
    int number;       // Целое число
    double decimal;   // Дробное число
    string text;      // Строка

    // Вводим целое число
    cout << "Введите целое число: ";
    cin >> number;

    // Вводим дробное число
    cout << "Введите дробное число: ";
    cin >> decimal;

    // Убираем переход на новую строку после ввода числа
    cin.ignore(10000, '\n');

    // Вводим строку, в том числе с пробелами
    cout << "Введите строку: ";
    getline(cin, text);

    // Выводим значения и названия типов
    cout << "Число: " << number << ", тип: int" << endl;
    cout << "Дробное число: " << decimal
         << ", тип: double" << endl;
    cout << "Строка: " << text << ", тип: string" << endl;

    return 0;  // Завершаем программу
}
