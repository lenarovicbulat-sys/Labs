#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (n < 2) {
        cout << n << " нельзя разложить на простые множители" << endl;
        return 1;
    }

    int original = n;  // сохраняем исходное число для вывода
    cout << original << " = ";

    bool first = true;  // флаг, чтобы не ставить " × " перед первым множителем

    // Делим на 2, пока делится
    while (n % 2 == 0) {
        if (!first) cout << " x ";
        cout << 2;
        first = false;
        n /= 2;
    }

    // Перебираем нечётные делители от 3 до √n с шагом 2
    for (int d = 3; (long long)d * d <= n; d += 2) {
        while (n % d == 0) {
            if (!first) cout << " x ";
            cout << d;
            first = false;
            n /= d;
        }
    }

    // Если после всех делений осталось число > 1 — оно простое
    if (n > 1) {
        if (!first) cout << " x ";
        cout << n;
    }
    cout << endl;

    return 0;
}