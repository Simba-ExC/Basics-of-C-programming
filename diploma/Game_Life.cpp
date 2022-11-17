#include <cstdio>
#include <cstdlib> // std::system("clear");
#include <fstream>
#include <iostream>
#include <unistd.h> // sleep(1);

#define NONE '-'
#define ALIVE '*'

void initPoint(char **arr, int row, int column, int chose, int quantity,std::istream &file) 
{
  
  if (chose == 1) 
  {
    for (int i = 0; i < quantity; ++i) 
    {
      arr[rand() % (row)][rand() % (column)] = ALIVE;
    }
  }
  if (chose == 3) 
  {
    while (!file.eof()) 
    {
      int x = 0;
      int y = 0;
      file >> x >> y;
      arr[x][y] = ALIVE;
    }
  } 
}

int printAliveCells(char **arr, int row, int column) 
{
  int AliveCells = 0;
  for (int i = 0; i < row; ++i) 
  {
    for (int j = 0; j < column; ++j) 
    {
      // std::cout << " I = " <<i<< " J = "<<j << " "<<arr[i * row + j] <<"\n";
      if (arr[i][j] == ALIVE) 
      {
        // std::cout << " позиция живой клетки : "<<i<<" "<<j<<"\n";
        AliveCells++;
      }
    }
  }
  std::cout << " Живых клеток : " << AliveCells << "\n";
  return AliveCells;
}

int getAliveCells(char **arr, int i, int j, int row, int column) 
{
  int n = 0;
  for (int k = -1; k <= 1; k++)
    for (int l = -1; l <= 1; l++) 
    {
      if (k == 0 && l == 0)
        continue;

      int x = i + k;
      int y = j + l;
      
      if (x < 0 || x >= row || y < 0 || y >= column)
        continue;

      if (arr[x][y] == ALIVE) 
      {
        n++;
      }
    }
  
  return n;
}

char **create_two_dim_array(int n, int m) 
{
  char **arr = new char *[n];
  for (int i = 0; i < n; i++) 
  {
    arr[i] = new char[m];
  }
  return arr;
}

void fill_two_dim_array(char **arr, int rows, int columns) {
  for (int i = 0; i < rows; i++) 
  {
    for (int j = 0; j < columns; j++) 
    {
      arr[i][j] = NONE;
    }
  }
}

void print_two_dim_array(char **arr, int rows, int columns) 
{
  std::system("clear");
  for (int i = 0; i < rows; i++) 
  {
    for (int j = 0; j < columns; j++) 
    {
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
std::cout <<"после  цикла ";
}

void delete_two_dim_array(char **arr, int rows, int columns) 
{
  for (int i = 0; i < rows; i++) 
  {
    delete[] arr[i];
  }
  delete[] arr;
}

bool go(char **arr, int row, int column) 
{

  char **arrClone = create_two_dim_array(row, column);
  for (int i = 0; i < row; i++) 
  {
    for (int j = 0; j < column; j++) 
    {
      arrClone[i][j] = arr[i][j];
    }
  }

  for (int i = 0; i < row; ++i) 
  {
    for (int j = 0; j < column; ++j) 
    {
      int n = getAliveCells(arr, j, i, row, column);
      //std::cout << "\nУ клетки в ячейки [" <<i<<" ][ "<<j<<"] рядом "<< n;
      if (arr[i][j] == NONE && n == 3)
      {
        arrClone[i][j] = ALIVE;
      }
      if (arr[i][j] == ALIVE && (n < 2 || n > 3))
      {
        arrClone[i][j] = NONE;
      }
    }
  }
  
  bool GameOver = true;
  int zerocells = printAliveCells(arr, row, column);

  for (int i = 0; i < row; ++i) 
  {
    for (int j = 0; j < column; ++j) 
    {
      if (arr[i][j] != arrClone[i][j]) 
      {
        GameOver = false;
        break;
      }
    }
  }
  
  if (GameOver) 
  {
    if (zerocells == 0) 
    {
      std::cout << "Игра закончилась , все клетки погибли.\n";
      return true;
    } 
    else 
    {
      std::cout << "\n Вселенная пришла в стационарное состояние. Игра окончена!\n";
      return true;
    }
  }
  
  for (int i = 0; i < row; ++i) 
  {
    for (int j = 0; j < column; ++j) 
    {
      arr[i][j] = arrClone[i][j];
    }
  }
  delete_two_dim_array(arrClone, row, column);
  return false;
}

int main() 
{
  int row = 0;
  int column = 0;
  std::ifstream file("map.txt");
  bool cheking = false;
  int chose = 0;
  int quantity = 0;
  int generation = 0;
  
  do 
  {
    std::cout << "Выберите вариант заполнения поля:\n\n";
    std::cout << "1. Заполнить самому. \n";
    std::cout << "2. заполнить из файла\n\n";
    std::cout << "Ваш выбор: ";
    std::cin >> chose;
    
    if (chose == 1) 
    {
      std::cout << "Введем размер игрового поля.\n\n";
      std::cout << "Введите размер по горизонтали : ";
      std::cin >> row;
      std::cout << "\n";
      std::cout << "Введите размер по вертикали: ";
      std::cin >> column;
      std::cout << "\n";
      
      std::cout << "Заполним матрицу случайным образом.\n\n";
      std::cout << "Введите колличество рандомных клеток: ";
      std::cin >> quantity;
      cheking = true;
    }
    
    if (chose == 2) 
    {
      cheking = true;
      std::cout << "\n\nВ файле :\n\n";
      if (!file.is_open()) 
      {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
      } 
      else 
      {
        chose = 3;
        file >> row >> column;
        std::cout << row << "- Строк \n"
                  << column << "- Колонок \n"
                  << std::endl;
        sleep(2);
      }
    } 
  } while (!cheking);

  char **arr = create_two_dim_array(row, column);
  fill_two_dim_array(arr, row, column);
  
  initPoint(arr, row, column, chose, quantity, file);
  file.close();
  bool GameOver = false;
  
  do 
  {
    generation++;
    print_two_dim_array (arr, row, column);
    std::cout << "\nПоколение: " << generation;
    GameOver = go(arr, row, column);
    sleep(3);
  } while (!GameOver);
delete_two_dim_array(arr, row, column);
}