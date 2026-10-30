#include <iostream>  // Ввод и вывод
#include <string>    // Работа со строками
using namespace std;

int main() {
    string text;  // Переменная для хранения строки

    // Вводим строку
    cout << "Введите строку: ";
    getline(cin, text);

    // Выводим длину строки
    cout << "Длина строки: " << text.length() << endl;

    // Проверяем, что строка не пустая
    if (text.length() > 0) {
        // Выводим первый и последний символы
        cout << "Первый символ: " << text[0] << endl;
        cout << "Последний символ: "
             << text[text.length() - 1] << endl;
    } else {
        cout << "Строка пустая" << endl;
    }

    // Считаем количество пробелов
    int spaces = 0;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            spaces++;
        }
    }

    cout << "Количество пробелов: " << spaces << endl;

    return 0;
}