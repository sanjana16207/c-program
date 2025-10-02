#include <stdio.h>
int main() {
    int costPrice, sellingPrice;

    printf("Enter Cost Price: ");
    scanf("%d", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%d", &sellingPrice);

    if(costPrice > sellingPrice)
        printf("Loss = %d\n", costPrice - sellingPrice);
    else
        printf("No Loss\n");

    return 0;
}
