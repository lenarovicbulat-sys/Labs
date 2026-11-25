# include <iostream>
using namespace std;
int main(){
    double a, b, c;// ввод трёх чисел
cout << "Введите первое число:";
cin >> a;
cout << "Введите второе число:";
cin >> b;
cout << "Введите третье число:";
cin >> c;
double max;
 if (a > b && a > c){// условие максимума
    max = a;
} else if (b > a && b > c){
max = b;
} else {
    max = c; // вывод максимума
}
cout << max;
return 0;
}