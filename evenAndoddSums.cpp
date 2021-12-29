#include <vector>
#include <iostream>

int main() {

// Test with an array
// std::vector<int> array_ = {2,4,3,6,1,9};

std::vector<int> array_(6);

for (int i = 0; i < array_.size(); i++) {
  std::cout << "Enter an integer\n";
  std::cin >> array_[i];
  }
  int evenSum = 0;
  int oddSum = 0;

  for (int i = 0; i < array_.size(); i++) {
    if (array_[i] % 2 == 0) {
      evenSum += array_[i];
    }
    else {
      oddSum += array_[i];
    }
  }

  std::cout << "Sum of even numbers is " << evenSum << "\n";
std::cout << "Sum of odd numbers is " << oddSum << "\n";

}

