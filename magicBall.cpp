#include <iostream>
#include <cstdlib>

int main() {
  // Your future is here
  // Doing Codecademy exercise

  std::cout << "MAGIC 8-BALL: \n";

  // std::cout << std::rand() << "\n";

  srand(time(NULL));
  int answer = std::rand() % 10;

  std::cout << answer << "\n";

  switch (answer) {
    case 0:
    std::cout << "It is certain";
    break;
    case 10:
    std::cout << "Very doubtful";
    break;
    case 1:
    std::cout << "It is decidely so.";
    break;
    case 2:
    std::cout << "Without a doubt.";
    break;
    case 3:
    std::cout << "Yes - definitely.";
    break;
    case 4:
    std::cout << "You may rely on it.";
    break;
    case 5:
    std::cout << "As I see it, yes";
    break;
    case 6:
    std::cout << "Most likely.";
    break;
    case 7:
    std::cout << "Outlook good.";
    break;
    case 8:
    std::cout << "Yes.";
    break;
    case 9:
    std::cout << "Cannot predict now.";
    break;
  }
}