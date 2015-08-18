#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
You're given an array containing integer values. You need to print the fraction of count of positive numbers, 
negative numbers and zeroes to the total numbers. Print the value of the fractions correct to 3 decimal places.
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> pos, neg, zero;
    int n, N;
    /* Read N */
    cin >> N;
    /* Read in N numbers */
    for (int i = 0; i < N; ++i) {
        cin >> n;
        if (n < 0)       neg.push_back (n);
        else if (n == 0) zero.push_back (n);
        else if (n > 0)  pos.push_back (n);
    }
    /* Calculate and display fractions */
    cout.setf (ios::fixed);
    cout.setf (ios::showpoint);
    cout.precision (3);
    cout << static_cast<double>(pos.size ()) / N  << endl 
         << static_cast<double>(neg.size ()) / N << endl 
         << static_cast<double>(zero.size ()) / N;
    return 0;
}