#include<iostream>
using namespace std;

int main(){
  int x =10;
  int &y = x; // Reference variable y refers to x (initialized with x)

  cout << "Value of x: " << x << endl; 
  
  cout << "Value of y: " << y << endl; 

  y = 20; // Changing the value of y also changes x
  cout << "After changing y, value of x: " << x << endl; 

  return 0;

}