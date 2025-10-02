#include <stdio.h>
int main() {
    int l, w;
    printf("Enter length and width: ");
    scanf("%d %d", &l, &w);
    printf("Perimeter = %d", 2*(l+w));
    return 0;
}
