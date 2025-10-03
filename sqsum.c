#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the limit (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    printf("Sum of squares of first %d numbers = %d\n", n, sum);
    return 0;
}
