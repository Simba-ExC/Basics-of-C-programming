#include <iostream>

int Pisano(int n) {
  if (n == 1 || n == 2)
    return 1;
  return Pisano(n - 1) + Pisano(n - 2);
}

int main(int argc, char **argv) {
  int n;
  std::cout << "Введите число: ";
  std::cin >> n;
  std::cout << "0" << " ";
  for (int i = 1; i <= n; i++) {
    std::cout << Pisano(i) << " ";
  }
  return 0;
}