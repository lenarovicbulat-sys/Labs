#include <cmath>  // функция для синуса
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout << setw(8) << "x"  // отступы
         << setw(10) << "sin(x)" << "\n";
    cout << string(20, '-') << "\n";
    cout << fixed << setprecision(4);
    for (int i = 0; i <= 10; ++i) {
        double x = i * M_PI / 10;  // цикл для значений от pi/10 до pi
        double y = sin(x);
        cout << setw(8) << x  // вывод
             << setw(10) << y << "\n";
    }
    return 0;
}