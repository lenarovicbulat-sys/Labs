#include <iostream>
#include <string>
#include <typeinfo>
#include <locale>
#include <cstdlib>
#include <limits>

int main () {
    std::setlocale(LC_ALL, "Russian");

    int integer;
    double decimal;
    std::string text;

    std::cout << "Введите целое число: ";
    std::cin >> integer;
    
    std::cout << "Введите дробное число: ";
    std::cin >> decimal;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Ввести строку:";
    std::getline(std::cin, text);
    
    std::cout << "Значение " << integer
        << ", тип " << typeid(integer).name() << "\n";
    std::cout << "Значение " << decimal
        << ", тип " << typeid(decimal).name() << "\n";
    std::cout << "Значение " << text
        << ", тип " << typeid(text).name() << "\n";

        return 0;
}
