#include <iostream>
#include <fstream>

void print (int* arr, int size) //вывод массива на экран
{
  for (int i = 0; i < size; i++ )
    {
     std::cout << arr[i] << " "; 
    }
  std::cout << std::endl;
}

int* create_array (int size)//создание динамического массива
{
  return new int[size]();
}

void reverse (int* arr, int size)//переворот массива
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
  int i;
  
  std::ifstream file("in.txt");
  if (!file.is_open())
  {
    std::cout << "Не получилось открыть файл in.txt" << std::endl;
    return 1;
  }
  else
  {
    file >> size;
  
    int* arr = create_array (size);
    for (i = 0; i < size && file; ++i)
    {
      file >> arr[i];
    }

    std::cout <<"Массив до переворота: \n" ;
    print(arr , size);
    reverse (arr , size);
    std::cout <<"Массив после переворота: \n" ;
    print(arr , size);
  
    delete[] arr;
    file.close();
  }
}