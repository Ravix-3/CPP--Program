//  Reference Variables Program
#include<iostream>
using namespace std;

int main(){
    int x = 10; // Original variable
    int &ref = x; // Reference variable
    
    cout << "Original value of x: " << x << endl; // Output: 10
    return 0;
}