#include <iostream>
#include <string>
using namespace std;

void inchesTestFunction();
void infoTestFunction();
void variableTestFunction();

int main() {
  bool quit = false;
  while (!quit){

    //inchesTestFunction();

    //infoTestFunction();

    variableTestFunction();
    
    char again = 'n';
    cout << "Run again? Y for 'Yes' and N for 'No' : ";
    cin >> again;
      if(again == 'n' || again == 'N'){
        quit = true;
      }
    }
  cout << endl;
  return 0;
}

void inchesTestFunction() {
  int inches = 100;
    cout << "Enter the total number of inches: ";
    cin >> inches;
    cout << inches << " inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es) = " << endl;
}

void infoTestFunction() {
  string firstName;
    string lastName;
    int age;
    double weight;

    cout << "\nEnter first name, last name, age, and weight separated by spaces:";
    cin >> firstName >> lastName >> age >> weight;
    cout << "\nName: " << firstName << " " << lastName << "\nAge:" << age << "\nWeight:" << weight << "\n\n";
}

void variableTestFunction(){

  int a, b;
  double z;
  char ch;

  cin >> ch;
  cin >> a >> b;
  cin >> z;

  cout << "\na = " << a << "\nb = " << b << "\nz = " << z << "\nch = " << ch << endl;
  
}


/*
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
*/