#include <stdio.h>
void main() {
    int a, b, c, *p1, *p2;
    p1 = &a;
    *p1 = 1;
    p1 = &b;
    *p1 = 2;
    p1 = p2;
    *p1 = 0;
    p2 = &c;
    *p2 = 3;
    printf("%d %d %d\n", a, b, c);
    p1 = p2;
    p2 = &a;
    *p2 = *p1;
    printf("%d %d %d\n", a, b, c);
}
