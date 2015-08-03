#include <iostream>
#include <cstdio>
using namespace std;
bool eq(int a, int b ) {
    return a == b;
}
int main() {
    // Complete the code.
    short n (0);
    string nStr;
    cin >> n;
    nStr = eq(n,0) ? "zero" : eq (n,1) ? "one" : eq (n,2) ? "two" : eq (n,3) ? "three" : eq (n,4) ? "four" :  eq (n,5) ? "five"
           : eq (n,6) ? "six" : eq (n,7) ? "seven" : eq (n,8) ? "eight" : eq (n,9) ? "nine" : "Greater than 9";
    cout << nStr << endl;
    
    return 0;
}
