#include <iostream>
#include <cstring>

int main() {
  char word[30];
  char secret_word[]={"малина"};
  do
  {
  std::cout << "Угадайте слово: ";
  std::cin >> word;
    if (strcmp(word,secret_word) == 0)
    {
      std::cout << "Правильно! Вы победили! Загаданное слово — малина";
    }
    else 
    {
      std::cout << "Неправильно \n";
    }
  }
  while (strcmp(word,secret_word)!= 0);
}