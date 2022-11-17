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
  int arr1[] = {1,2,3,4,5,6,7,8,9,0};
  int arr2[] = {5,6,7,8,9,0};
  int arr3[] = {3,4,5,7,0};

  print (arr1, sizeof (arr1)/sizeof(arr1[0]));
  print (arr2, sizeof (arr2)/sizeof(arr2[0]));
  print (arr3, sizeof (arr3)/sizeof(arr3[0]));
}