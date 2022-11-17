#include <iostream>
#include <cmath>

unsigned long Pisano(int n) 
{
unsigned long number = 1/sqrt(5)*(pow(((1+sqrt(5))/2),n) - pow(((1-sqrt(5))/2),n)); // формула «золотое сечение», подставив вместо n порядковый номер, можно узнать число фибоначчи на данном месте 
  return number;
}

int main() 
{
  int n;
  std::cout << "Введите число: ";
  std::cin >> n;
  for (int i = 0; i <= n; i++) {
    std::cout << Pisano(i) << " "; // в цикле подстовляем последовательность и считаем по попрядку  
  }
  return 0;
}