#include <iostream>
using namespace std;
int add(int , int = 0);
int main() {
  int num1,num2, result;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  result = add(num1, num2);
  cout << "Sum of " << num1 << " and " << num2 << " is " << result << endl;
  return 0;
}

int add(int a, int b) {
  return a + b;
}