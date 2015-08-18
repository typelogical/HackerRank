#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Watson gives two integers (A and B) to Sherlock and asks if he can count the number of 
square integers between A and B (both inclusive).
*/
/* Constants and globals */
#define MAX_SIZE 10000000              // 10^9
typedef size_t square;
square list[MAX_SIZE];
size_t listSize;
/* findSquares
    Find the squares bectween a and b inclusive.
*/
void findSquares (unsigned int a, unsigned int b);
/* displaySquares
    Find the squares bectween a and b inclusive.
*/
void displaySquares ();

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t N;
    cin >> N;
    for (size_t i = 0; i < N; ++i) {
        size_t a, b;
        cin >> a >> b;
        findSquares (a, b);
        cout << listSize << endl;
    }
    return 0;
}

void findSquares (unsigned int a, unsigned int b) {
    listSize = 0;
    
    for (size_t n = static_cast<size_t>(floor(sqrt(a))), m = static_cast<size_t>(ceil(sqrt(b))); 
                n <= m;
                ++n) {
        square sq = n * n;
        if (sq >= a && sq <= b) {
            list[listSize] = sq;
            ++listSize;
        }
    }
}

void displaySquares () {
    for (int i = 0; i < listSize; ++i) {
        cout << list [i] << " ";
    }
}