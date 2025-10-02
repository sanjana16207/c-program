#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n % 3 == 0)
        printf("Multiple of 3\n");
    else
        printf("Not multiple of 3\n");
    return 0;
}
