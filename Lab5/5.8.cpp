#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Перевод десятичного числа в двоичную систему
string decimalToBinary(int n) {
    if (n == 0) return "0";

    string binary = "";
    bool isNegative = n < 0;
    n = abs(n);

    while (n > 0) {
        binary += to_string(n % 2);
        n /= 2;
    }

    if (isNegative) {
        binary += "-";
    }

    reverse(binary.begin(), binary.end());
    return binary;
}

// Перевод двоичного числа в десятичную систему
int binaryToDecimal(string binary) {
    int result = 0;
    bool isNegative = false;
    int start = 0;

    if (binary[0] == '-') {
        isNegative = true;
        start = 1;
    }

    for (int i = start; i < binary.length(); i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            cout << "Неверный формат двоичного числа!" << endl;
            return 0;
        }
        result = result * 2 + (binary[i] - '0');
    }

    return isNegative ? -result : result;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int choice;
    cout << "Конвертер систем счисления:" << endl;
    cout << "1. Десятичное -> Двоичное" << endl;
    cout << "2. Двоичное -> Десятичное" << endl;
    cout << "Выберите действие: ";
    cin >> choice;

    if (choice == 1) {
        int decimal;
        cout << "Введите десятичное число: ";
        cin >> decimal;
        cout << "Двоичное представление: " << decimalToBinary(decimal) << endl;
    }
    else if (choice == 2) {
        string binary;
        cout << "Введите двоичное число: ";
        cin >> binary;
        cout << "Десятичное представление: " << binaryToDecimal(binary) << endl;
    }
    else {
        cout << "Неверный выбор!" << endl;
    }

    return 0;
}
