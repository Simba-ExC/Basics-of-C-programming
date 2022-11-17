#include <iostream>

void print (int* arr, int size)
{
  for (int i = 0; i < size; i++ )
    {
     std::cout << arr[i] << " "; 
    }
  std::cout << std::endl;
}

int main(int args, char** argv) 
{
  int size;
  
  std::cout <<"Введите размер массива: ";
  std::cin >> size;

  int * arr = new int[size];
  
  for (int i = 0; i < size; i++ )
    {
      std::cout <<"Введите arr["<< i <<"] = "; 
      std::cin >> arr[i];
    }
  std::cout << std::endl;

  print (arr , size);
  delete [] arr;
}