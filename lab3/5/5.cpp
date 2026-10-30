#include <iostream>
using namespace std;

int main() {
    double a, b, c;  // Три числа

    // Вводим три числа
    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    // Вычисляем среднее арифметическое
    double average = (a + b + c) / 3;

    // Сначала считаем, что первое число минимальное
    double minimum = a;

    // Проверяем, не меньше ли второе число
    if (b < minimum) {
        minimum = b;
    }

    // Проверяем третье число
    if (c < minimum) {
        minimum = c;
    }

    // Сначала считаем, что первое число максимальное
    double maximum = a;

    // Проверяем, не больше ли второе число
    if (b > maximum) {
        maximum = b;
    }

    // Проверяем третье число
    if (c > maximum) {
        maximum = c;
    }

    // Выводим результаты
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Минимальное число: " << minimum << endl;
    cout << "Максимальное число: " << maximum << endl;

    return 0;
}