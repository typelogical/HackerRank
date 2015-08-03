#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    // Complete this function
    int t1 = *a + *b;
    int t2 = *a - *b;
    *a = t1;
    *b = t2 < 0 ? -t2 : t2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    if (scanf("%d %d", &a, &b));
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
