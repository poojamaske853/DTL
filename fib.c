#include <stdio.h>

int main() {
    int n = 10, first = 0, second = 1, next, i;

    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
