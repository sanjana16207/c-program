#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if(a < b)
        printf("%d is smaller\n", a);
    else
        printf("%d is smaller\n", b);
    return 0;
}
s