#include <stdio.h>
int main() {
    int n, i, result = 0;
    printf("Enter the limit (n): ");
    scanf("%d", &n);

    result = 1 * 1;   // start with 1^2

    for (i = 2; i <= n; i++) {
        result = result - (i * i);
    }

    printf("Result of subtraction of squares up to %d = %d\n", n, result);
    return 0;
}
