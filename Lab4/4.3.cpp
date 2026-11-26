#include <iostream>
using namespace std;
int main() {
  int age; // ввод возраста
  cout << "Вdедите возраст";
  cin >> age;
  if (age <= 0) {
    cout << "Неправильные данные"; // для некоректных данных
  } else if (age <= 12) {
    cout << "Ребёнок";
  } else if (age <= 17) {
    cout << "Подросток"; // условие возраста
  } else if (age <= 64) {
    cout << "Взрослый";
  } else if (age >= 65) {
    cout << "Пожилой";
  }
  return 0;
}