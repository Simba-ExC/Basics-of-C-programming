#include <iostream>

int main() {
  int number = 0,  summ=0, multiplication=0;
  std::cout << "Введите целое число: ";
  std::cin >> number;
  
  for (int a = 1; a < 11; ++a)
    {
      multiplication = 0;
      multiplication = number * a;
      std::cout << number << " x " << a << " = "<<" "<<multiplication<< "\n";
    }
}