#include <iostream>
using namespace std;
int main(){
    int N;
    long long sum;
    long long factorial;
    long long square;
    cout << "Введите N: ";
    cin >> N;
    for(int i = 1; i <= N ; ++i){
        sum += i;
        factorial *= i;
        square += i*i;
        if(i == N){
            cout << "Сумма: " << sum << "\n";
            cout << "Факториал: " << factorial << "\n";
            cout << "Сумма квадратов: " << square << "\n";
        } 
    }
    return 0;


}