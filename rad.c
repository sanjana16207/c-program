#include <stdio.h>
int main() {
    float radius, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    if (radius > 0) {
        circumference = 2 * 3.14159 * radius;
        printf("Circumference of circle = %.2f\n", circumference);
    }
    else {
        printf("Invalid input! Radius must be greater than 0.\n");
    }

    return 0;
}
