#include <iostream>
using namespace std;
int main() {
    int N;
    long long sum;  // создаём переменные (long long из-за больших размеров чисел)
    long long factorial;
    long long square;
    cout << "Введите N: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {  // цилк для всех операций
        sum += i;
        factorial *= i;
        square += i * i;
        if (i == N) {
            cout << "Сумма: " << sum << "\n";
            cout << "Факториал: " << factorial << "\n";  // вывод
            cout << "Сумма квадратов: " << square << "\n";
        }
    }
    return 0;
}