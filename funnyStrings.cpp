#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define DIFF(T) abs (s [T] - s [T - 1])
#define FUNNY "Funny\n";
#define NOT_FUNNY "Not Funny\n";
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    for (short i = 0; i < T; ++i) {
        string s;
        bool funny = 1;
        cin >> s;
        int sizeS = s.size ();
        for (int i = 1, j = sizeS - 1; i < sizeS; ++i, --j) {
            int x = DIFF (i),
                y = DIFF (j);
                if ( x != y)  {
                    funny = 0;
                    break;
                }
        }
        if (funny) {
            cout << FUNNY
        }
        else 
            cout << NOT_FUNNY
    }
    return 0;
}
