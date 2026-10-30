#include <iostream>
using namespace std;

int main() {
    int seconds;  // Общее количество секунд

    // Вводим количество секунд
    cout << "Введите количество секунд: ";
    cin >> seconds;

    // Находим количество часов
    int hours = seconds / 3600;

    // Находим оставшиеся минуты
    int minutes = (seconds % 3600) / 60;

    // Находим оставшиеся секунды
    int remainingSeconds = seconds % 60;

    // Выводим результат
    cout << "Часы: " << hours << endl;
    cout << "Минуты: " << minutes << endl;
    cout << "Секунды: " << remainingSeconds << endl;

    return 0;
}