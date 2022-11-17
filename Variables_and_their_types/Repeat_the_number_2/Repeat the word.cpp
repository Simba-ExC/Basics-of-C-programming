#include <iostream>

int main() {
  
  std::cout << "Задание 2. Повторите слово.\n\n";
  char* str = new char[255];
  std::cout << "Введите любое предложение\n";
  std::cin.getline(str,255);
  std::cout << "Вы ввели:" << "  " << str <<"\n"; 

}
