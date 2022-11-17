#include <iostream>
#include <fstream>

void read (std::istream& stream)
{
  for (std::string str; stream>>str;)
  {
    std::cout << str << std::endl;    
  }
}

int main() 
{
  std::ifstream in("in.txt");
  read(in);
}