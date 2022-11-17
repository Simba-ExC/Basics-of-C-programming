#include <iostream>
int random_number = 10;
int main() {
  int arr[10];
  for (int i = 0; i < 10; i++)
    {
        arr[i] = rand () % random_number;
        
      if (i < 9)
      {
        std::cout<< arr[i]<< ", ";
      }
      else
      {
        std::cout<< arr[i];
      }
    }
}