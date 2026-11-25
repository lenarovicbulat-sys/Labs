#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите операцию: ";
    cin >> op;
    cout << "Введите b: ";
    cin >> b;
    switch (op) {
        case '+':
            cout << a + b << "\n";
            break;
        case '-':
            cout << a - b << "\n";
            break;
        case '*':
            cout << a * b << "\n";
            break;
        case '/':
            if (b != 0) {
                cout << a / b << "\n";
            } else {
                cout << "Деление на ноль\n";
            }
            break;
        default:
            cout << "Неизвестная операция\n";
    }

    return 0;
}