#include <iostream>

void print (double* arr, int size)
{
  for (int i = 0; i < size; i++ )
    {
     std::cout << arr[i] << " "; 
    }
  std::cout << std::endl;
}

double* create_array (int size)
{
  return new double[size]() ;
}


int main(int args, char** argv) 
{
  int size;

  std::cout <<"Введите размер массива: ";
  std::cin >> size;

  double* arr = create_array (size);
  
  print(arr , size);
  
  delete[] arr;
}