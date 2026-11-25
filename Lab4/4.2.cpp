# include <iostream>
using namespace std;
int main(){
    double a, b, c;
cout << "Введите первое число:";
cin >> a;
cout << "Введите второе число:";
cin >> b;
cout << "Введите третье число:";
cin >> c;
double max;
 if (a > b && a > c){
    max = a;
} else if (b > a && b > c){
max = b;
} else {
    max = c;
}
cout << max;
return 0;
}