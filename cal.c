#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+')
        printf("%d\n", a+b);
    else if (op == '-')
        printf("%d\n", a-b);
    else if (op == '*')
        printf("%d\n", a*b);
    else if (op == '/')
        printf("%d\n", b!=0 ? a/b : 0);
    else
        printf("Invalid Operator\n");
    return 0;
}
