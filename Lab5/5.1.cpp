#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    cout << setw(8) << "x"
    << setw(10) << "sin(x)" << "\n";
    cout << string(20, '-') << "\n";
    cout << fixed << setprecision(4);
        for (int i = 0; i <= 10; ++i) {
            double x = i * M_PI / 10;
            double y = sin(x);
            cout << setw(8) << x
            << setw(10) << y << "\n";
        } 
        return 0;
        }