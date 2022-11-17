#include <iostream>
int main() {
  int size = 1;
  int firs_id = 0;
  int arr[size];

  std::cout << "Массив до сортировки: "; // создаем массив
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 10;
    std::cout << arr[i] << " ";
  }
  std::cout << "\n"
            << "\n";

  if (size == 1)
  {
    std::cout << "массив из одного элемента, нечего сортировать \n";
  }
  else 
  {
  do {
    for (int i = (size -2); i >= firs_id; i--) // начинаем с конца, -2 поставил из за того, что если стоит -1, то при переборе вылезаем за пределы массива на индекс -1, где находятся ненужные нам данные 
    {
      if (arr[i] >
          arr[i + 1]) // если последний элемент меньше то меняем местами
      {
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
      }
    }
    std::cout << "firs_id = "<< firs_id << "\n"  ;
    firs_id++; // избавился от ненужного прохода по массиву, если мы поменяли
               // местами первый элемент, то нет смысла проходить массив еще
               // раз, тем самым первый элемент будет уже не 1 а 2 , это
               // ускоряет сортировку
  } while (firs_id != (size - 1));
  }
  std::cout << "\n";
  std::cout << "После сортировки:";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
   std::cout << "\n";
  // При сравнении с обычной сорировкой в которой используем булевую переменную, данный алгоритм на уменьшение проходов , показывает себя намного быстрее
}