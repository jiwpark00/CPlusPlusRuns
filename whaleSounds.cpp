#include <iostream>
#include <vector>
#include <string>

// Codecademy exercise

int main() {
  // Whale, whale, whale
  // What have we got here

  std::string input_string = "Hi, Human";

  std::vector<char> vowels;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector<char> result;

  for (int i = 0; i < input_string.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input_string[i] == vowels[j]) {
        //std::cout << input_string[i] << "\n";

        // doubling e and u
        if (input_string[i] == 'e' || input_string[i] == 'u') {
          result.push_back(input_string[i]);
          result.push_back(input_string[i]);
        }
        else {
           result.push_back(input_string[i]);
        }
       
      }
    }
  }

  for (int k = 0; k < result.size(); k++) {
    std::cout << result[k];
  }
  std::cout << "\n";

}