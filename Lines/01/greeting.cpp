#include <iostream>
#include <cstring>

int main() {
  char name[30];
  std::string surname;
  std::cout << "Введите имя: ";
  std::cin >> name;
  std::cout << "Введите фамилию: ";
  std::cin >> surname;
  std::cout << "Здравствуйте, "<< name <<" "<< surname <<"!"<< std::endl; ;
}