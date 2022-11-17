#include <iostream>

int main() {

  int number = 0;
  int summ = 0;
  do
  {
    std::cout << "Введите целое число или число '0', чтобы закончить:\n";
    std::cin >> number;
    summ = summ + number;
  }while (number != 0);
  std::cout << " Сумма: :\n" << summ;
}