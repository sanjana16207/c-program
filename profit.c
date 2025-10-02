#include 
<stdio.h>
int main()

 {
    
int costPrice, sellingPrice;

    printf("Enter Cost Price: ");
   
 scanf("%d", &costPrice);

    printf("Enter Selling Price: ");
   
 scanf("%d", &sellingPrice);

   
 
if(sellingPrice > costPrice)
       

 printf("Profit = %d\n", sellingPrice - costPrice);

  
  else
        printf("No Profit\n");

 
  
 return 0;


}
