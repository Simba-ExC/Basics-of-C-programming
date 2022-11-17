#include <iostream>
int main() {
  int arr[10];
  int max_number_arr = 0;
  int min_number_arr = 100;
  int random_number = 10;
  
  std::cout << "Массив : ";
  for (int i = 0; i < 10; i++)
    {
        arr[i] = rand () % random_number;
        std::cout<< arr[i]<< " ";

      if (arr[i] < min_number_arr) 
        {
          min_number_arr = arr[i];
        }
      
      if (arr[i] > max_number_arr) 
        {
          max_number_arr = arr[i];
        }
    }
    std::cout << "\nМинимальный элемент: " << min_number_arr;
    std::cout << "\nМаксимальный элемент: "<< max_number_arr;
  
}