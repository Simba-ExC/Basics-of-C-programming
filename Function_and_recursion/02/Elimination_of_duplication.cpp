#include <iostream>

int sum(int value, int power) {
  int result = 1;
  for (int i = 0; i < power; i++) {
    result *= value;
  }
  std::cout << value << " в степени " << power << " = " << result << std::endl;
  return 0;
}

int main(int argc, char **argv) {

  int value = 5;
  int power = 2;
  sum(value, power);
  
  value = 3;
  power = 3;
  sum(value, power);
  
  value = 4;
  power = 4;
  sum(value, power);

  return 0;
}