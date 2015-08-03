#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string transformS (string s) {
    int i = 0, size = s.length ();
    string newS = s.substr (0, 1);
    while (i < size) {
        char val = s[i], nextVal = val;
        while (nextVal == val && i < size) nextVal = s [++i];   // Iterate until a different character is met
        if (i < size && nextVal != val) newS += nextVal;       // Add new character to new string
    }
    return newS;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    string s;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> s;
        string newS = transformS (s);
        cout << s.size () - newS.size () << endl;
    }
    return 0;
}
