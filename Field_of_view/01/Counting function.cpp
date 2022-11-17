#include <iostream>

int counting_function();

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
       std:: cout << "Количество вызовов функции counting_function():" << counting_function() << "\n";
    }
}

int counting_function()
{
        static int j=0;
        
        j++;
        
        return j;
    }