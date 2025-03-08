#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> numbers;

  int num1, num2, num3, num4, num5;

  cout << "Enter first number" << endl;
  cin >> num1;

  cout << "Enter second number" << endl;
  cin >> num2;

  cout << "Enter third number" << endl;
  cin >> num3;

  cout << "Enter fourth number" << endl;
  cin >> num4;

  cout << "Enter fifth number" << endl;
  cin >> num5;

  numbers.push(num1);
  numbers.push(num2);
  numbers.push(num3);
  numbers.push(num4);
  numbers.push(num5);

  cout << "The numbers in the stack are: " << endl;
  while (!numbers.empty()){
    cout << numbers.top() << " ";
    numbers.pop();
  }

  return 0;
}