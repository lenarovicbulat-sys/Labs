#include <iostream>
using namespace std;
int main() {
    int N;
    long long a = 0, b = 1;  // переменные для ряда Фибоначчи
    long long c;
    cout << "Введите N: ";  // ввод
    cin >> N;
    cout << N << " Чисел Фибоначчи: ";  // вывод ряда
    for (int i = 0; i <= N; ++i) {
        cout << a << " ";  // цикл
        long long c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
    return 0;
}