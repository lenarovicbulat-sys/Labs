#include <iostream>
using namespace std;
int main () {
    int number;
    cout << "Введите число: ";
    cin >> number;
 
    if (number % 2 == 0){
    cout << "число чётное";
    } else {
    cout << "число нечётное";
    }
    //дополнительно
    if (number % 3 == 0){
    cout << ", делится на 3";
    } else {
    cout << ", не делится на 3";
    }
    if (number > 0){
        cout << ", положительное";
    }
    else if(number < 0){
                cout << ", отрицательное";
    } else {
        cout << ", равно нулю";
    }
    return 0;
}