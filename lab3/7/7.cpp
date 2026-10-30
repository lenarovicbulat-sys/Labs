#include <iostream>
using namespace std;

int main() {
    double radius, height;  // Радиус и высота цилиндра

    // Задаём значение числа Пи
    double pi = 3.14159;

    // Вводим радиус
    cout << "Введите радиус цилиндра: ";
    cin >> radius;

    // Вводим высоту
    cout << "Введите высоту цилиндра: ";
    cin >> height;

    // Проверяем, что радиус и высота больше нуля
    if (radius <= 0 || height <= 0) {
        cout << "Ошибка: радиус и высота должны быть "
             << "больше нуля" << endl;
        return 0;
    }

    // Вычисляем объём цилиндра
    double volume = pi * radius * radius * height;

    // Вычисляем площадь полной поверхности цилиндра
    double surface = 2 * pi * radius * (radius + height);

    // Выводим результаты
    cout << "Объём цилиндра: " << volume << endl;
    cout << "Площадь поверхности: " << surface << endl;

    return 0;
}