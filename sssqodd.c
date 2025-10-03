#include <stdio.h>
int main() {
 int n, i, sum = 0;
 printf("Enter the limit (n): ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 if (i % 2 != 0) {
 sum += (i * i);
 }
 }
 printf("Sum of squares of odd numbers up to %d = %d\n", n, sum);
 return 0;
}