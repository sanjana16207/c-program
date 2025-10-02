#include <stdio.h>
int main() {
    float f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    printf("Celsius = %.2f", (f-32)*5/9);
    return 0;
}
