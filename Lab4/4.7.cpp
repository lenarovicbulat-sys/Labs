#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите стороны a, b, c: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Равносторонний\n";
        } else if (a == b || a == c || b == c) {
            cout << "Равнобедренный\n";
        } else {
            cout << "Разносторонний\n";
        }
    } else {
        cout << "Треугольник не существует\n";
    }

    return 0;
}