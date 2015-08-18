#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t N, n, sum, i;
    cin >> N;
    for (sum = 0, i = 0; i < N;++i) {
       cin >> n;
       sum += n;
    }
    cout << sum << endl;
    return 0;
}