#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    
*/
// Find the index i such that elements 0 to i -1 = i + 1 to N, where N is the size of array
string res (vector <int> a, int sum) {
    size_t size = a.size ();
    int sum1 = 0;   // the first half of the array
    int sum2 = sum; // the second half of the array
    int i = 0;
    for (i = 0; i < size && (sum1) != (sum2 - a [i]); ++i) {
        sum1 += a [i];
        sum2 -= a [i];
    }
    if (i < size) {
        return "YES";
    }
    return "NO";   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> a;
    int T, N;
    cin >> T;
    for (int i = 0, sum = 0; i < T; ++i, sum = 0, a.clear ()) {
        cin >> N;
        for (int j = 0, n; j < N; ++j, sum += n,a.push_back (n)) {
            
            cin >> n;
        }
        string output = res (a, sum);
        cout << output << endl;
    }
    return 0;
}
