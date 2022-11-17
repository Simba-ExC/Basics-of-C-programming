#include <iostream>
int main() {
int rows = 3, colum = 10;
int arr[rows ][colum];
int max_number_arr = 0;
int min_number_arr = 100;
int random_number = 10;
int j_min = 0 , j_max = 0, i_min = 0, i_max = 0 ;
  
//std::cout << "Массив : ";
  
  for (int i = 0; i < rows ; i++)
  {
    for (int j = 0; j < colum; j++)
    {
      arr[i][j] = rand () % random_number;
      std::cout << arr[i][j] << "\t" ;

     if (arr[i][j] < min_number_arr) 
      {
        min_number_arr = arr[i][j]; j_min = j; i_min = i;
      }
      
    if (arr[i][j] > max_number_arr) 
      {
        max_number_arr = arr[i][j]; j_max = j; i_max = i;
      }
    }
     std::cout << "\n";
  } 
  
  std::cout << "\nМинимальный элемент: " << min_number_arr << ", в ячейки [" << i_min <<"],["<< j_min <<"]";
  std::cout << "\nМаксимальный элемент: "<< max_number_arr << ", в ячейки [" << i_max <<"],["<< j_max <<"]";
}