#include <iostream>

int main ()
{
  int rows;
  int columns;
  char symbol;

  std::cout << "Please enter the number of rows you would like: ";
  std::cin >> rows;

  std::cout << "Please enter the number of columns you would like: ";
  std::cin >> columns;

  std::cout << "What symbol would you like to use?: ";
  std::cin >> symbol;

  std::cout << std::endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      std::cout << symbol;
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;
}
