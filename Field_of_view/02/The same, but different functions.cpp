#include <iostream>
namespace add
{
  int calculate (int x, int y)
  {
    return x+y;
  }
}
namespace sub
{
  int calculate (int x, int y)
  {
    return x-y;
  }
}
namespace mult
{
  int calculate (int x, int y)
  {
    return x*y;
  }
}
namespace divi
{
  int calculate (int x, int y)
  {
    return x/y;
  }
}
int main() {
  int a = 6;
  int b = 9;
  std::cout << "x = 6, y = 9\n";
  
  std::cout << "Сложение: " << add::calculate(a, b) << std::endl; 
  std::cout << "Вычитание: " << sub::calculate(a, b) << std::endl; 
  std::cout << "Умножение: " << mult::calculate(a, b) << std::endl; 
  std::cout << "Деление: " << divi::calculate(a, b) << std::endl;
}