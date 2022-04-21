#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int n = *a;
    *a += *b;
    *b = abs((*b - n));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
