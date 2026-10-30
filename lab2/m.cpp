#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif

// auto square(int x) -> int {
//     return x * x;
// }

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif

    // auto number{5};  // Изменили с 7 на 5
    // auto result = square(number);
    // std::cout << "Число: " << number << std::endl;
    // std::cout << "Квадрат: " << result << std::endl;
    std::cout << "Hello, World!" << std::endl;
    std::string name = "Салахов Булат";  // Изменили имя
    std::cout << "Студент: " << name << std::endl;
    std::cout << "Дата: 08.10.2026" << std::endl;
    return 0;
}