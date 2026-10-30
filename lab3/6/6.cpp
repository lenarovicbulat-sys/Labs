#include <iostream>
using namespace std;

int main() {
    int choice;          // Выбор пользователя
    double temperature;  // Исходная температура
    double result;       // Результат преобразования

    // Выводим меню
    cout << "1 - Цельсий в Фаренгейт" << endl;
    cout << "2 - Фаренгейт в Цельсий" << endl;

    // Считываем выбор
    cout << "Выберите операцию: ";
    cin >> choice;

    // Вводим температуру
    cout << "Введите температуру: ";
    cin >> temperature;

    // Переводим Цельсий в Фаренгейт
    if (choice == 1) {
        result = temperature * 9.0 / 5.0 + 32;
        cout << "Температура в Фаренгейтах: "
             << result << endl;
    }

    // Переводим Фаренгейт в Цельсий
    else if (choice == 2) {
        result = (temperature - 32) * 5.0 / 9.0;
        cout << "Температура в Цельсиях: "
             << result << endl;
    }

    // Проверяем правильность выбора
    else {
        cout << "Ошибка: выберите 1 или 2" << endl;
    }

    return 0;
}