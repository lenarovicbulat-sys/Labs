#include <iostream>
using namespace std;
int main(){
    int N;
    long long a = 0, b = 1;
    long long c;  
    cout <<  "Введите N: ";
    cin >> N;
    cout << N << " Чисел Фибоначчи: ";
    for (int i = 0; i <= N ; ++i ){
     cout << a << " ";  
     long long c = a + b ;
     a = b;
     b = c;
}
cout << "\n";
return 0;
}