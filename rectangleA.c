#include <stdio.h>

int main() {
    float length, width, area;

    // Input from user
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;

    // Print result
    printf("Area of Rectangle = %.2f\n", area);

    return 0;
}
