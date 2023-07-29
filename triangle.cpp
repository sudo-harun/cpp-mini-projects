#include <iostream>

int main ()
{
  int side;
  std::string symbol;

  std::cout << "Please enter the length of a side: ";
  std::cin >> side;

  std::cout << "What symbol would you like to use?: ";
  std::cin >> symbol;

  std::string app = symbol;

  std::cout << std::endl;

  for (int i = 0; i < side; i++) {
    for (int j = 1; i < side; j++) {
      std::cout << symbol;
      symbol.append(app);
      break;
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;
}
