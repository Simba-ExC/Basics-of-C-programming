#include <iostream>

int **create_two_dim_array(int n, int m) 
{
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) 
  {
    arr[i] = new int[m];
  }
  return arr;
}

void fill_two_dim_array(int **arr, int rows, int columns) {
  for (int i = 0; i < rows; i++) 
  {
    for (int j = 0; j < columns; j++) 
    {
      arr[i][j] = (i + 1) * (j + 1);
    }
  }
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

int main(int argc, char **argv) 
{
  int rows, columns;
  std::cout << "введите колличество строк: ";
  std::cin >> rows;
  std::cout << "введите колличество столбцов: ";
  std::cin >> columns;

  int **arr = create_two_dim_array(rows, columns);

  fill_two_dim_array(arr, rows, columns);

  std::cout << "Таблица умножения:" << std::endl;

  print_two_dim_array(arr, rows, columns);

  delete_two_dim_array(arr, rows, columns);
}