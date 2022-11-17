#include <iostream>

int main() {
  

int number_int;
short number_short;
long number_long ;
long long number_dable_long;
float number_float;
double number_dauble;
long double number_long_double;
bool logik;

std::cout << "int: " <<&number_int <<"\t"<<sizeof(number_int) << "\n";
std::cout << "short: " << &number_short <<"\t"<<sizeof(number_short)<< "\n";
std::cout << "long: " << &number_long <<"\t"<<sizeof(number_long)<< "\n";
std::cout << "long long: " << &number_dable_long <<"\t"<<sizeof(number_dable_long)<< "\n";
std::cout << "float: " << &number_float <<"\t"<<sizeof(number_float)<<  "\n";
std::cout << "double: " << &number_dauble <<"\t"<<sizeof(number_dauble)<< "\n";
std::cout << "long double: " << &number_long_double <<"\t"<<sizeof(number_long_double)<< "\n";
std::cout << "bool: " << &logik <<"\t"<<sizeof(logik)<< "\n";
  
}