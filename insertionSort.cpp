#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

// peusdo code
/*
   
*/
void printArr (vector<int> ar) {
    int size = ar.size ();
    for (int i = 0; i < size; ++i)
    {
        cout << ar [i] << " ";
    }
    cout << endl;
}
void insertionSort(vector <int>  ar) {
    for (int i = ar.size () - 1, j, val; i > 0; --i) {
        val = ar[i];
        for (j = i - 1; j >= 0 && val < ar[j]; --j) {
            ar [j + 1] = ar [j];
            printArr (ar);
        }
         ar [j + 1] = val; 
    }
    printArr (ar);
}

int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
   for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

insertionSort(_ar);
   
   return 0;
}
