// Example program
#include <iostream>
#include <string>

int main()
{
  std::string name, surname; //имя и фамилия студента 
  int age; // возраст
  
  std::cin >> name >> surname;
  std::cin >> age;
  
  std::cout << "Name is " << name << std::endl;
  std::cout << surname << std::endl;
  std::cout << age << std::endl;
  
  return 0;
}
