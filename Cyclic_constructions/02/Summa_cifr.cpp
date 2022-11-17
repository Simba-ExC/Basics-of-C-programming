#include <iostream>

int main() {
  int number = 0,  summ=0;
  std::cout << "Введите целое число:\n";
  std::cin >> number;

  while (number != 0)
  {
    summ = summ + (number % 10) ;
    number = number / 10;
  }
  std::cout << "Сумма цифр: " << summ;
}