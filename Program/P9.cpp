#include<iostream>
using namespace std;
int add( int&, int&); 

int main(){
  int  x,y, result; // Declare three integers x, y, and result
  cin >> x >> y; // Input two integers x and y
  result = add(x, y); // Call the add function with x and y
  cout << "Sum: " << result;
}
  

int add(int &a, int &b){
    return a + b; // Function to add two integers by reference
}

