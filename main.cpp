#include <iostream>

int main() {
  std::string sentence; std::string str; sentence = "Citizens unrest about new variants.";
   std::cout << sentence.substr(0,5) << std::endl;
   std::cout << sentence.substr(6,6) << std::endl;
   std::cout << sentence.substr(6,16) << std::endl;
   std::cout << sentence.substr(17,10) << std::endl;
   std::cout << sentence.substr(3,6) << std::endl;
   std::cout << sentence.substr(0,8) << std::endl;
   std::cout << sentence.substr(12,18) << std::endl;
} 