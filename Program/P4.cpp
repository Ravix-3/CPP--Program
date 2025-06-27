#include <iostream>
int calculate(int num1, int num2, int op) {
  switch(op) {
    case '+': return num1 + num2; // Addition
    case '-': return num1 - num2; // Subtraction
    case '*': return num1 * num2; // Multiplication
    case '/': return num2 != 0 ? num1 / num2 : 0; // Division with zero check
    default: return 0; // Invalid operator
  }
}
using namespace std;

int main() {
  int num1, num2, result;
  char op;
  cout << "Enter two numbers and operator: ";
  cin >> num1 >> num2 >> op;
  result = calculate(num1, num2, op);
  cout << "Result: " << result << endl;
  return 0;
}
