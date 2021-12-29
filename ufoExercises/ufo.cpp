#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {

  std::string codeword = "codecademy";
  std::string answer = "__________";

  int misses = 0;

  std::vector<char> incorrect;
  bool guess = false;

  char letter;

while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: ";
    std::cin >> letter >> "\n";

    for (int i = 0; i < codeword.size(); i++) {
      
    }

    misses++;

  }

  greet();
  end_game(answer, codeword);
  

}

