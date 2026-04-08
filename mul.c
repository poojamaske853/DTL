#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = multiply(a, b);

    printf("Multiplication = %d\n", result);

    return 0;
}
