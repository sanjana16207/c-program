#include <stdio.h>
int main() {
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = (a * a) - (b * b);

    printf("%d^2 - %d^2 = %d\n", a, b, result);
    return 0;
}
