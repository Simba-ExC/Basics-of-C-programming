#include <iostream>

void print (int* arr, int size)
{
  for (int i = 0; i < size; i++ )
    {
     std::cout << arr[i] << " "; 
    }
  std::cout << std::endl;
}

void completion_arr (int* arr, int size )
{
  for (int i = 0; i < size; i++ )
  {
    arr[i] = rand() % 10;
  }
}

int* create_arr (int size)
{
  return new int[size] ;
}

void reverse (int* arr, int size)
{
  int temp = 0;
  std::cout <<"наобходимо выполнить "<< size/2 <<" перестановок \n";
  for (int i = 0; i < (size/2); i++ )
    {
      temp = arr[i];
      std::cout << temp <<" меняем местами с " << arr[size - 1 - i] << "\n";
      arr[i] = arr[size - 1 - i];
      arr[size - 1 - i] = temp;
    }
}

int main(int args, char** argv) 
{
  int size;

  
  std::cout <<"Введите размер массива: ";
  std::cin >> size;

  int* arr = create_arr (size);
  
  completion_arr (arr , size);
  
  std::cout <<"Массив до переворота: \n" ;
  print(arr , size);
  
  reverse (arr , size);
  
  std::cout <<"Массив после переворота: \n" ;
  print(arr , size);
  
  delete[] arr;
}