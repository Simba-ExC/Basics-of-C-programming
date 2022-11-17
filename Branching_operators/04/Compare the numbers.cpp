#include <iostream>
#include <cmath>

int main() {
  std::cout << "Задание 4. Сравни числа\n\n";
  int first_number = 0, second_number = 0;
  const char* sign_first_number;   // знак первого числа
  const char* sign_second_number;  // знак второго числа
  const char* text_first_number;   // текстовой вариант первого числа 
  const char* text_second_number;  // текстовой вариант второго числа 
  const char* difference;          // текстовой знака разницы
  
  std::cout << "Введите целое число: ";
  std::cin >> first_number;
  std::cout << "Введите целое число: ";
  std::cin >> second_number;
  
  if (first_number < 0)            // ___________ 
  {                                //  |
    sign_first_number = "Минус";   //  |
  }                                //  |
  else                             //  |
  {                                //  |
    sign_first_number = "";        //  |
  }                                //  узнаем знак
  if (second_number < 0)           //  |
  {                                //  |
    sign_second_number = "Минус";  //  |
  }                                //  |
  else                             //  |  
  {                                //  |
    sign_second_number = "";      //  v  
  }                                //___________

  switch ( abs(first_number)){  //___________ берем по модулю, что бы не обращать внимание на знак , так как мы его уже учли
  case 1:
    text_first_number = "Один";
    break;
  case 2:
    text_first_number = "Два";
    break;
  case 3:
    text_first_number = "Три";
    break;
  case 4:
    text_first_number = "Четыре";
    break;
  case 5:
    text_first_number = "Пять";
    break;
  case 6:
    text_first_number = "Шесть";
    break;
  case 7:
    text_first_number = "Семь";
    break;
  case 8:
    text_first_number = "Восемь";
    break;
  case 9:
    text_first_number = "Девять";
    break;
  case 10:
    text_first_number = "Десять";
    break;
  case 11:
    text_first_number = "Одиннадцать";
    break;
  case 12:
    text_first_number = "Двенадцать";
    break;
  case 13:
    text_first_number = "Тринадцать";
    break;
  case 14:
    text_first_number = "Четырнадцать";
    break;
  case 15:
    text_first_number = "Пятнадцать";
    break;
  case 16:
    text_first_number = "Шестнадцать";
    break;
  case 17:
    text_first_number = "Семнадцать";
    break;
  case 18:
    text_first_number = "Восемнадцать";
    break;
  case 19:
    text_first_number = "Девятнадцать";
    break;
  case 20:
    text_first_number = "Двадцать";
    break;
  case 21:
    text_first_number = "Двадцать один";
    break;
  case 22:
    text_first_number = "Двадцать два";
    break;
  case 23:
    text_first_number = "Двадцать три";
    break;
  case 24:
    text_first_number = "Двадцать четыре";
    break;
  case 25:
    text_first_number = "Двадцать пять";
    break;
  case 26:
    text_first_number = "Двадцать шесть";
    break;
  case 27:
    text_first_number = "Двадцать семь";
    break;
  case 28:
    text_first_number = "Двадцать восемь";
    break;
  case 29:
    text_first_number = "Двадцать девять";
    break;
  case 30:
    text_first_number = "Тридцать";
    break;
  case 31:
    text_first_number = "Тридцать один";
    break;
  case 32:
    text_first_number = "Тридцать два";
    break;
  case 33:
    text_first_number = "Тридцать три";
    break;
  case 34:
    text_first_number = "Тридцать четыре";
    break;
  case 35:
    text_first_number = "Тридцать пять";
    break;
  case 36:
    text_first_number = "Тридцать шесть";
    break;
  case 37:
    text_first_number = "Тридцать семь";
    break;
  case 38:
    text_first_number = "Тридцать восемь";
    break;
  case 39:
    text_first_number = "Тридцать девять";
    break;
  case 40:
    text_first_number = "Сорок";
    break;
  case 41:
    text_first_number = "Сорок один";
    break;
  case 42:
    text_first_number = "Сорок два";
    break;
  case 43:
    text_first_number = "Сорок три";
    break;
  case 44:
    text_first_number = "Сорок четыре";
    break;
  case 45:
    text_first_number = "Сорок пять";
    break;
  case 46:
    text_first_number = "Сорок шесть";
    break;
  case 47:
    text_first_number = "Сорок семь";
    break;
  case 48:
    text_first_number = "Сорок восемь";
    break;
  case 49:
    text_first_number = "Сорок девять";
    break;
  case 50:
    text_first_number = "Пятьдесят";
    break;
  case 51:
    text_first_number = "Пятьдесят один";
    break;
  case 52:
    text_first_number = "Пятьдесят два";
    break;
  case 53:
    text_first_number = "Пятьдесят три";
    break;
  case 54:
    text_first_number = "Пятьдесят четыре";
    break;
  case 55:
    text_first_number = "Пятьдесят пять";
    break;
  case 56:
    text_first_number = "Пятьдесят шесть";
    break;
  case 57:
    text_first_number = "Пятьдесят семь";
    break;
  case 58:
    text_first_number = "Пятьдесят восемь";
    break;
  case 59:
    text_first_number = "Пятьдесят девять";
    break;
  case 60:
    text_first_number = "Шестьдесят";
    break;
  case 61:
    text_first_number = "Шестьдесят один";
    break;
  case 62:
    text_first_number = "Шестьдесят два";
    break;
  case 63:
    text_first_number = "Шестьдесят три";
    break;
  case 64:
    text_first_number = "Шестьдесят четыре";
    break;
  case 65:
    text_first_number = "Шестьдесят пять";
    break;
  case 66:
    text_first_number = "Шестьдесят шесть";
    break;
  case 67:
    text_first_number = "Шестьдесят семь";
    break;
  case 68:
    text_first_number = "Шестьдесят восемь";
    break;
  case 69:
    text_first_number = "Шестьдесят девять";
    break;
  case 70:
    text_first_number = "Семьдесят";
    break;
  case 71:
    text_first_number = "Семьдесят один";
    break;
  case 72:
    text_first_number = "Семьдесят два";
    break;
  case 73:
    text_first_number = "Семьдесят три";
    break;
  case 74:
    text_first_number = "Семьдесят четыре";
    break;
  case 75:
    text_first_number = "Семьдесят пять";
    break;
  case 76:
    text_first_number = "Семьдесят шесть";
    break;
  case 77:
    text_first_number = "Семьдесят семь";
    break;
  case 78:
    text_first_number = "Семьдесят восемь";
    break;
  case 79:
    text_first_number = "Семьдесят девять";
    break;
  case 80:
    text_first_number = "Восемьдесят";
    break;
  case 81:
    text_first_number = "Восемьдесят один";
    break;
  case 82:
    text_first_number = "Восемьдесят два";
    break;
  case 83:
    text_first_number = "Восемьдесят три";
    break;
  case 84:
    text_first_number = "Восемьдесят четыре";
    break;
  case 85:
    text_first_number = "Восемьдесят пять";
    break;
  case 86:
    text_first_number = "Восемьдесят шесть";
    break;
  case 87:
    text_first_number = "Восемьдесят семь";
    break;
  case 88:
    text_first_number = "Восемьдесят восемь";
    break;
  case 89:
    text_first_number = "Восемьдесят девять";
    break;
  case 90:
    text_first_number = "Девяносто";
    break;
  case 91:
    text_first_number = "Девяносто один";
    break;
  case 92:
    text_first_number = "Девяносто два";
    break;
  case 93:
    text_first_number = "Девяносто три";
    break;
  case 94:
    text_first_number = "Девяносто четыре";
    break;
  case 95:
    text_first_number = "Девяносто пять";
    break;
  case 96:
    text_first_number = "Девяносто шесть";
    break;
  case 97:
    text_first_number = "Девяносто семь";
    break;
  case 98:
    text_first_number = "Девяносто восемь";
    break;
  case 99:
    text_first_number = "Девяносто девять";
    break;
  case 100:
    text_first_number = "Сто";
    break;
  default:
    text_first_number = "Первое число больше ста";
    break;
  }                                // с первым числом закончили, теперь необходимо сделать тоже самое со вторым 
  switch ( abs(second_number)){  
  case 1:
    text_second_number = "Один";
    break;
  case 2:
    text_second_number = "Два";
    break;
  case 3:
    text_second_number = "Три";
    break;
  case 4:
    text_second_number = "Четыре";
    break;
  case 5:
    text_second_number = "Пять";
    break;
  case 6:
    text_second_number = "Шесть";
    break;
  case 7:
    text_second_number = "Семь";
    break;
  case 8:
    text_second_number = "Восемь";
    break;
  case 9:
    text_second_number = "Девять";
    break;
  case 10:
    text_second_number = "Десять";
    break;
  case 11:
    text_second_number = "Одиннадцать";
    break;
  case 12:
    text_second_number = "Двенадцать";
    break;
  case 13:
    text_second_number = "Тринадцать";
    break;
  case 14:
    text_second_number = "Четырнадцать";
    break;
  case 15:
    text_second_number = "Пятнадцать";
    break;
  case 16:
    text_second_number = "Шестнадцать";
    break;
  case 17:
    text_second_number = "Семнадцать";
    break;
  case 18:
    text_second_number = "Восемнадцать";
    break;
  case 19:
    text_second_number = "Девятнадцать";
    break;
  case 20:
    text_second_number = "Двадцать";
    break;
  case 21:
    text_second_number = "Двадцать один";
    break;
  case 22:
    text_second_number = "Двадцать два";
    break;
  case 23:
    text_second_number = "Двадцать три";
    break;
  case 24:
    text_second_number = "Двадцать четыре";
    break;
  case 25:
    text_second_number = "Двадцать пять";
    break;
  case 26:
    text_second_number = "Двадцать шесть";
    break;
  case 27:
    text_second_number = "Двадцать семь";
    break;
  case 28:
    text_second_number = "Двадцать восемь";
    break;
  case 29:
    text_second_number = "Двадцать девять";
    break;
  case 30:
    text_second_number = "Тридцать";
    break;
  case 31:
    text_second_number = "Тридцать один";
    break;
  case 32:
    text_second_number = "Тридцать два";
    break;
  case 33:
    text_second_number = "Тридцать три";
    break;
  case 34:
    text_second_number = "Тридцать четыре";
    break;
  case 35:
    text_second_number = "Тридцать пять";
    break;
  case 36:
    text_second_number = "Тридцать шесть";
    break;
  case 37:
    text_second_number = "Тридцать семь";
    break;
  case 38:
    text_second_number = "Тридцать восемь";
    break;
  case 39:
    text_second_number = "Тридцать девять";
    break;
  case 40:
    text_second_number = "Сорок";
    break;
  case 41:
    text_second_number = "Сорок один";
    break;
  case 42:
    text_second_number = "Сорок два";
    break;
  case 43:
    text_second_number = "Сорок три";
    break;
  case 44:
    text_second_number = "Сорок четыре";
    break;
  case 45:
    text_second_number = "Сорок пять";
    break;
  case 46:
    text_second_number = "Сорок шесть";
    break;
  case 47:
    text_second_number = "Сорок семь";
    break;
  case 48:
    text_second_number = "Сорок восемь";
    break;
  case 49:
    text_second_number = "Сорок девять";
    break;
  case 50:
    text_second_number = "Пятьдесят";
    break;
  case 51:
    text_second_number = "Пятьдесят один";
    break;
  case 52:
    text_second_number = "Пятьдесят два";
    break;
  case 53:
    text_second_number = "Пятьдесят три";
    break;
  case 54:
    text_second_number = "Пятьдесят четыре";
    break;
  case 55:
    text_second_number = "Пятьдесят пять";
    break;
  case 56:
    text_second_number = "Пятьдесят шесть";
    break;
  case 57:
    text_second_number = "Пятьдесят семь";
    break;
  case 58:
    text_second_number = "Пятьдесят восемь";
    break;
  case 59:
    text_second_number = "Пятьдесят девять";
    break;
  case 60:
    text_second_number = "Шестьдесят";
    break;
  case 61:
    text_second_number = "Шестьдесят один";
    break;
  case 62:
    text_second_number = "Шестьдесят два";
    break;
  case 63:
    text_second_number = "Шестьдесят три";
    break;
  case 64:
    text_second_number = "Шестьдесят четыре";
    break;
  case 65:
    text_second_number = "Шестьдесят пять";
    break;
  case 66:
    text_second_number = "Шестьдесят шесть";
    break;
  case 67:
    text_second_number = "Шестьдесят семь";
    break;
  case 68:
    text_second_number = "Шестьдесят восемь";
    break;
  case 69:
    text_second_number = "Шестьдесят девять";
    break;
  case 70:
    text_second_number = "Семьдесят";
    break;
  case 71:
    text_second_number = "Семьдесят один";
    break;
  case 72:
    text_second_number = "Семьдесят два";
    break;
  case 73:
    text_second_number = "Семьдесят три";
    break;
  case 74:
    text_second_number = "Семьдесят четыре";
    break;
  case 75:
    text_second_number = "Семьдесят пять";
    break;
  case 76:
    text_second_number = "Семьдесят шесть";
    break;
  case 77:
    text_second_number = "Семьдесят семь";
    break;
  case 78:
    text_second_number = "Семьдесят восемь";
    break;
  case 79:
    text_second_number = "Семьдесят девять";
    break;
  case 80:
    text_second_number = "Восемьдесят";
    break;
  case 81:
    text_second_number = "Восемьдесят один";
    break;
  case 82:
    text_second_number = "Восемьдесят два";
    break;
  case 83:
    text_second_number = "Восемьдесят три";
    break;
  case 84:
    text_second_number = "Восемьдесят четыре";
    break;
  case 85:
    text_second_number = "Восемьдесят пять";
    break;
  case 86:
    text_second_number = "Восемьдесят шесть";
    break;
  case 87:
    text_second_number = "Восемьдесят семь";
    break;
  case 88:
    text_second_number = "Восемьдесят восемь";
    break;
  case 89:
    text_second_number = "Восемьдесят девять";
    break;
  case 90:
    text_second_number = "Девяносто";
    break;
  case 91:
    text_second_number = "Девяносто один";
    break;
  case 92:
    text_second_number = "Девяносто два";
    break;
  case 93:
    text_second_number = "Девяносто три";
    break;
  case 94:
    text_second_number = "Девяносто четыре";
    break;
  case 95:
    text_second_number = "Девяносто пять";
    break;
  case 96:
    text_second_number = "Девяносто шесть";
    break;
  case 97:
    text_second_number = "Девяносто семь";
    break;
  case 98:
    text_second_number = "Девяносто восемь";
    break;
  case 99:
    text_second_number = "Девяносто девять";
    break;
  case 100:
    text_second_number = "Сто";
    break;
  default:
    text_second_number = "Второе число больше ста";
    break;
  }    
if (first_number > second_number)  // больше, меньше или равно
  {
    difference = " больше чем ";
  }
else if (first_number < second_number)
  {
    difference = " меньше чем";
  }
else
  {
    difference = " равно ";
  }
std::cout << sign_first_number << " " << text_first_number << difference << sign_second_number << " " << text_second_number;
}