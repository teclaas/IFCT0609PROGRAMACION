#include <stdio.h>

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Serie de Fibonacci: %d, %d", t1, t2);

    for (int i = 1; i <= n-2; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf(", %d", nextTerm);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Introduce el número de términos: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
