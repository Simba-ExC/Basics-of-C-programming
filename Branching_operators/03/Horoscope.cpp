#include <iostream>

int main() {
  std::cout << "Задание 3. Гороскоп\n\n";
  
  int pol = 0;
  int age = 0;
  int zodiac_sign = 0;

  std::cout << "Выберите пол:\n";
  std::cout<<"1. Мужской\n";
  std::cout<<"2. Женский\n";
  std::cin >> pol; 
  if (pol == 1)
    {
    std::cout << "Введите ваш возраст:\n";
    std::cin >> age;
    if (age < 40)
      {
        std::cout << "Выберите ваш знак зодиака:\n";
        std::cout<<"1. Овен\n";
        std::cout<<"2. Телец\n";
        std::cout<<"3. Близнецы\n";
        std::cout<<"4. Рак\n";
        std::cout<<"5. Лев\n";
        std::cout<<"6. Дева\n";
        std::cout<<"7. Весы\n";
        std::cout<<"8. Скорпион\n";
        std::cout<<"9. Стрелец\n";
        std::cout<<"10. Козерог\n";
        std::cout<<"11. Водолей\n";
        std::cout<<"12. Рыбы\n";
        std::cin >> zodiac_sign; 
        switch ( zodiac_sign ) {
        case 1:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 2:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 3:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 4:
          std::cout<<"Сегодня - очень плодотворный день - можно добиться того, что прежде казалось почти невозможным.\n";
          break;
        case 5:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 6:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 7:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 8:
          std::cout<<"Сегодня - очень плодотворный день - можно добиться того, что прежде казалось почти невозможным.\n";
          break;
        case 9:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 10:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 11:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 12:
          std::cout<<"Сегодня - очень плодотворный день - можно добиться того, что прежде казалось почти невозможным.\n";
          break;
        }
      }
    else 
      {
        std::cout << "Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
      }
    }
    
  else 
    {
    std::cout << "Введите ваш возраст:\n";
    std::cin >> age;
    if (age > 15 && age < 30 )
      {
        std::cout << "Выберите ваш знак зодиака:\n";
        std::cout<<"1. Овен\n";
        std::cout<<"2. Телец\n";
        std::cout<<"3. Близнецы\n";
        std::cout<<"4. Рак\n";
        std::cout<<"5. Лев\n";
        std::cout<<"6. Дева\n";
        std::cout<<"7. Весы\n";
        std::cout<<"8. Скорпион\n";
        std::cout<<"9. Стрелец\n";
        std::cout<<"10. Козерог\n";
        std::cout<<"11. Водолей\n";
        std::cout<<"12. Рыбы\n";
        std::cin >> zodiac_sign; 
        switch ( zodiac_sign ) {
        case 1:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 2:
          std::cout<<"Сегодняшний вечер подходит для общения с друзьями, домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно: найдется дело, которое увлечет всех.\n";
          break;
        case 3:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 4:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 5:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 6:
          std::cout<<"Сегодняшний вечер подходит для общения с друзьями, домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно: найдется дело, которое увлечет всех.\n";
          break;
        case 7:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 8:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 9:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 10:
          std::cout<<"Сегодняшний вечер подходит для общения с друзьями, домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно: найдется дело, которое увлечет всех.\n";
          break;
        case 11:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        case 12:
          std::cout<<"Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
          break;
        }
      }
    else 
      {
        std::cout << "Гороскоп для Вас находится в разработке - приходите чуточку позже ;)\n";
      }
    }
}