#include <iostream>

 using namespace std;
 int calculate(int num1=1, int num2=1, int num3=1) {
     return num1 * num2 * num3; // Multiplication of three numbers
 }
int main() {
    int num1 , num2 , num3 , ans;
    cout << "Enter a number: ";
    cin >> num1 >> num2 >> num3;
    ans = calculate(num1,num2,num3);
    cout << "Result of multiplication is " << ans << endl;
    return 0;
}