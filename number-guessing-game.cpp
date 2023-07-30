#include <iostream>
#include <ctime>

int main () {
  
  srand(time(NULL));

  int num = rand() % 100 + 1;
  int guess;
  int tries = 1;

  std::cout << "Please enter your guess between 1 and 100: ";
  std::cin >> guess;

  while (guess != num) {
    std::cout << "Wrong! ";
    tries++;
    int away = abs(guess - num);
    guess < num ? std::cout << "Too low." << std::endl : std::cout << "Too high." << std::endl;
    std::cout << "You are " << away << " numbers away. Try again: ";
    std::cin >> guess;
  }

  std::cout << "You win! It took you " << tries << " tries." << std::endl;

  if (tries > 5) {
    std::cout << "You can do better though." << std::endl;
  }

  return 0;
}
