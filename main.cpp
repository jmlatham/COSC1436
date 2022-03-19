#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void inchesTestFunction();
void infoTestFunction();
void variableTestFunction();
void ignoreTestFunction();
void floatingPointPrecisionManipulation();
void getLineTestFunction();
void readFileTestFunction();

int main() {
  bool quit = false;
  while (!quit){

    //inchesTestFunction();

    //infoTestFunction();

    //variableTestFunction();

    //ignoreTestFunction();
    
    //floatingPointPrecisionManipulation();

    //getLineTestFunction();

    readFileTestFunction();
    
    char again = 'n';
    cout << "Run again? Y for 'Yes' and N for 'No' : ";
    cin >> again;
    quit = (again == 'n' || again == 'N');
    /*
    cout << again;
    cout << quit;
    */
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

  cout << "\nEnter a character: ";
  cin >> ch;
  cout << "\nEnter two integers separated by a space: ";
  cin >> a >> b;
  cout << "\nEnter a floating point number: ";
  cin >> z;

  cout << "\na = " << a << "\nb = " << b << "\nz = " << z << "\nch = " << ch << endl;
  
}

void ignoreTestFunction(){
  char ch1, ch2;
  char ch3, ch4;

  cout << "Enter message: ";
  cin >> ch1;
  cin.ignore(5,'.');
  cin >> ch2;
  cout << "\nch1 = " << ch1;
  cout << "\nch2 = " << ch2 << endl;
  cout << "Enter message: ";
  cin >> ch3;
  cin.ignore(100,'.');
  cin >> ch4;
  cout << "\nch3 = " << ch3;
  cout << "\nch4 = " << ch4;
}

void floatingPointPrecisionManipulation(){
  float value1 = 1234.5678;
 
    cout << "Value1 with fixed format: " << fixed << value1 << endl;
    
    cout << "Value1 with scientific format: " << scientific << value1 << endl;
    
    cout << "Value1 with fixed format and two decimal places: " << fixed;
    cout << setprecision(2) << value1 << endl;
}

void getLineTestFunction(){
  string fullName;
  cout << "Enter your full name with spaces: \n";
  getline(cin, fullName);
  cout << fullName << endl;
}

void readFileTestFunction(){
  ifstream inData;
  ofstream outData;

  inData.open("progData.dat");
  outData.open("progData.out");ios::app
  /*
  outData.open("progData.out", ios::app); // for appending
  */

  inData.close();
  outData.close();
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