#include <iostream>
#include <fstream>

int **create_two_dim_array(int n, int m) 
{
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) 
  {
    arr[i] = new int[m];
  }
  return arr;
}

void print_two_dim_array(int **arr, int rows, int columns) 
{
  for (int i = 0; i < rows; i++) 
  {
    for (int j = 0; j < columns; j++) 
    {
      std::cout << arr[i][j] << "\t";
    }
    std::cout << std::endl;
  }
}

void delete_two_dim_array(int **arr, int rows, int columns) 
{
  for (int i = 0; i < rows; i++) 
  {
    delete[] arr[i];
  }
  delete[] arr;
}

void revers_two_dim_array(int **arr, int rows, int columns) 
{
  for (int i = 0; i < rows; i++) 
  {
    for (int j = 0; j < (columns/2); j++) 
    {
      int temp = arr[i][j];
      std::cout << temp <<" меняем местами с " << arr[i][columns - 1 - j] << "\n";
      arr[i][j] = arr[i][columns - 1 - j];
      arr[i][columns - 1 - j] = temp;
    }
  }
  std::cout << "\n";
}

int main(int argc, char **argv) 
{
  int rows;
  int columns;
  std::ifstream file("in.txt");
  if (!file.is_open())
  {
    std::cout << "Не получилось открыть файл in.txt" << std::endl;
    return 1;
  }
  else
  {
  file >> rows >> columns;
  int **arr = create_two_dim_array(rows, columns);
  for (int i = 0; i < rows; i++)
      for (int j = 0; j < columns; j++)
        file >> arr[i][j];
  
  std::cout << "матрица из файла :\n";
  print_two_dim_array(arr, rows, columns);
  std::cout << "\n";
  std::cout << "перевернутая матрица :\n";
  std::cout << "\n";
  revers_two_dim_array(arr, rows, columns);
  print_two_dim_array(arr, rows, columns);
  delete_two_dim_array(arr, rows, columns);
  file.close();
  }
}