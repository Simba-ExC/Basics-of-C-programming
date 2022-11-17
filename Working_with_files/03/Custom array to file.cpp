#include <iostream>
#include <fstream>

void print (int* arr, int size)
{
  for (int i = 0; i < size; i++ )
    {
     std::cout << arr[i] << " "; 
    }
  std::cout << std::endl;
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
  std::cout <<"\n";
  int * arr = new int[size];
  
  for (int i = 0; i < size; i++ )
    {
      std::cout <<"Введите arr["<< i <<"] = "; 
      std::cin >> arr[i];
    }
  std::cout << std::endl;

  std::cout <<"Созданный массив: ";
  print (arr , size);
  std::cout <<"\n";
  reverse (arr , size);
  std::cout <<"\n";
  std::cout <<"Перевернутый массив: ";
  print (arr , size);
  std::cout <<"\n";
  std::cout <<"запишем массив в файл \n";
  std::cout <<"\n";
  
  std::ofstream file("out.txt");
  if (!file.is_open())
  {
    std::cout << "Не получилось открыть файл out.txt" << std::endl;
    return 1;
  }
  else
  {
    file << size << std::endl;
    for (int i = 0; i < size; i++ )
    {
      file << arr[i] << " "; 
    }
    std::cout << "Успешно записали в файл out.txt" << std::endl;
  }
  delete [] arr;
  file.close();
}