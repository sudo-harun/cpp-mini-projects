#include <iostream>
#include <ctime>

int main () {
  
  srand(time(NULL));

  int randomNumber = rand() % 100 + 1;
  int guess;

  std::cout << "Please enter your guess between 1 and 100: ";
  std::cin >> guess;

  while (guess != randomNumber) {
    std::cout << "Wrong! ";
    int away = abs(guess - randomNumber);
    std::string hoco;
    guess < randomNumber ? std::cout << "Too low." << std::endl : std::cout << "Too high." << std::endl;
    std::cout << "You are " << away << " numbers away. Try again: ";
    std::cin >> guess;
  }

  std::cout << "You win!" << std::endl;

  return 0;
}
