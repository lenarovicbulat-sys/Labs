#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите a, b, c: ";// ввод коэфициентов
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Бесконечное множество решений\n" ;// проверка кол-ва решений
            } else {
                cout << "Нет решений\n";
            }
        } else {
            cout << "Корень: " << -c / b << "\n";
        }
    } else {
        double d = b * b - 4 * a * c;
        if (d > 0) {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            cout << "x1 = " << x1 << ", x2 = " << x2 << "\n"; // вычисление корня
        } else if (d == 0) {
            double x = -b / (2 * a);
            cout << "x = " << x << "\n";
        } else {
            cout << "Нет действительных корней\n";
        }
    }

    return 0;
}