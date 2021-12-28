#include <iostream>

int main() {
  // Fizzbuzz starts here
  int i;

  for (i = 0; i <= 100; i++) {
    if (i % 3 == 0) {
      if (i % 5 == 0) {
        std::cout << "FizzBuzz\n";
      }
      else {
        std::cout << "Fizz\n";
      }
     }
     else if (i % 5 == 0) {
         std::cout << "Buzz\n";
     }
     else {
       std::cout << i << "\n";
     }
  }
}