#include <iostream>

int main() {
  std::cout << "Задание 2. Упорядочить числа\n\n";
  int a =0, b=0, c=0;
  std::cout << "Введите первое число:\t";
  std::cin >> a;
  std::cout << "Введите второе число:\t";
  std::cin >> b;
  std::cout << "Введите третье число:\t";
  std::cin >> c;

 (a>b && a>c && b>c)? std::cout << "результат:\t" << a << "\t"<< b << "\t"<< c : ((a>b && a>c && c>b)? std::cout << "результат:\t" << a << "\t"<< c << "\t"<< b : ((c<a && c>b && b>a)? std::cout << "результат:\t" << c << "\t"<< b << "\t"<< a :((b>a && b>c && c>a)? std::cout << "результат:\t" << b << "\t"<< c << "\t"<< a :((b>a && b>c && a>c)? std::cout << "результат:\t" << b << "\t"<< a << "\t"<< c :((c>a && c>b && a>b)? std::cout << "результат:\t" << c << "\t"<< a << "\t"<< b :
((a==b && c>b || c>a)? std::cout << "результат:\t" << c << "\t"<< b << "\t"<< a:
((a==b && a>c || b>c)? std::cout << "результат:\t" << a << "\t"<< b << "\t"<< c:((b==c && a>c || a>b)? std::cout << "результат:\t" << a << "\t"<< b << "\t"<< c:
((b==c && b>a || c>a)? std::cout << "результат:\t" << c << "\t"<< b << "\t"<< a:
((a==c && a>b || c>b)? std::cout << "результат:\t" << a << "\t"<< c << "\t"<< b: ((a==c && b>c || b>a)? std::cout << "результат:\t" << a << "\t"<< a << "\t"<< c:
std::cout << "ошибка!\t")))))))))));
}