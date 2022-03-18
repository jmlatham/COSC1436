#include <iostream>

int main() {
  // Write your main here
  std::cout << "**********************************\n\n";
  std::cout << "*    Programming Assignment 1    *\n\n";
  std::cout << "*     Computer Programming I     *\n\n";
  std::cout << "*           Author: JML          *\n\n";
  std::cout << "*   Due Date: Friday, March 21   *\n\n";
  std::cout << "**********************************\n";

  char ch;
  std::cin.get(ch);
  while(ch != '\n')
  {
    if(ch != '\n'){
      std::cout<<"\ninside loop\n";
    }
    std::cout<<ch;
    std::cin.get(ch);
  }
  std::cout << "\n";
  int g;
  std::cin>>g;
  std::cout << "Output is: "<< g;
  std::cout << "\n";
  return 0;
}