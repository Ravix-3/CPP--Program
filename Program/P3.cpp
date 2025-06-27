#include<iostream>
using namespace std;
inline int  square(int n) {
    return n * n;
}
int main(){
    int n, ans;
    cout << "Enter a number: ";
    cin >> n;
    ans = square(n);
    cout << "Square of " << n << " is " << ans << endl;
    return 0;
}