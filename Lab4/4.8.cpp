#include <iostream>
#include <string>
using namespace std;

int main() {
    int year;
    string month;
    cout << "Введите год: ";
    cin >> year;
    cout << "Введите месяц (январь, февраль, март, апрель, май, июнь, июль, август, сентябрь, октябрь, ноябрь, декабрь): ";
    cin >> month;
    
    if (month == "январь") {
        cout << "Ответ: 31";
    } else if (month == "февраль") {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            cout << "Ответ: 29";
        } else {
            cout << "Ответ: 28";
        }
    } else if (month == "март") {
        cout << "Ответ: 31";
    } else if (month == "апрель") {
        cout << "Ответ: 30";
    } else if (month == "май") {
        cout << "Ответ: 31";
    } else if (month == "июнь") {
        cout << "Ответ: 30";
    } else if (month == "июль") {
        cout << "Ответ: 31";
    } else if (month == "август") {
        cout << "Ответ: 31";
    } else if (month == "сентябрь") {
        cout << "Ответ: 30";
    } else if (month == "октябрь") {
        cout << "Ответ: 31";
    } else if (month == "ноябрь") {
        cout << "Ответ: 30";
    } else if (month == "декабрь") {
        cout << "Ответ: 31";
    } else {
        cout << "Некоректные данные";
    }
    
    return 0;
}