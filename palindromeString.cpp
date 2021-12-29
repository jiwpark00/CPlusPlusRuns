#include <iostream>

// capital letters or edge cases not included

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

  std::string revText;

  for (int i = text.size()-1; i > -1; i--) {
    revText.push_back(text[i]);
  }


  if (revText == text) {
    return true;
  }

  else {
    return false;
  }

}

int main() {
  
  // Original codecademy ones
  //std::cout << is_palindrome("madam") << "\n";
  //std::cout << is_palindrome("ada") << "\n";
  //std::cout << is_palindrome("lovelace") << "\n";
  std::cout << "Enter the input string here now! ";
  std::string input_string;
  std::cin >> input_string;

  std::cout << is_palindrome(input_string) << "\n";

}