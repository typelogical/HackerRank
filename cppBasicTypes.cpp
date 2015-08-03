#include <iostream>
#include <cstdio>
using namespace std;
#define NUM 5
int main() {
    // Complete the code.
    void *types [NUM];
    types [0] = new int;
    types [1] = new long;
    types [2] = new long long;
    types [3] = new char;
    types [4] = new float;
    types [5] = new double;
    int statCode =
    scanf ("%d %ld %lld %c %f %lf", 
           (int*)types [0], (long*)types [1], (long long*)types [2], (char*)types [3], (float*)types [4], (double*)types [5]);
    printf ("%d\n%ld\n%lld\n%c\n%.2f\n%.5lf", *((int*)types[0]), *((long*)types [1]), *((long long*)types [2]), *((char*)types [3]), *((float*)types [4]), *((double*)types [5]));
    return 0;
}
