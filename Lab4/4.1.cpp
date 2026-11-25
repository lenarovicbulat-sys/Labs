#include <iostream>
using namespace std;
int main () {
    int number;
    cout << "Введите число: ";
    cin >> number;// принятие числа
    if (number % 2 == 0){
    cout << "число чётное";// условие чётности и нечётности
    } else {
    cout << "число нечётное";
    }
    //дополнительно
    if (number % 3 == 0){
    cout << ", делится на 3";// деление на 3
    } else {
    cout << ", не делится на 3";
    }
    if (number > 0){
        cout << ", положительное";//определение знака
    }
    else if(number < 0){
                cout << ", отрицательное";
    } else {
        cout << ", равно нулю";
    }
    return 0;
}