#include <stdio.h>

//Function to find product of two binary numbers
int bin_prod(int bin1, int bin2)
{
    int i = 0, rem = 0, sum[20];
    int binaryProd = 0;
 
    while (bin1 != 0 || bin2 != 0)
    {
        sum[i++] =(bin1 % 10 + bin2 % 10 + rem) % 2;
        rem =(bin1 % 10 + bin2 % 10 + rem) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }
    if (rem != 0)
        sum[i++] = rem;
    --i;
    while (i >= 0)
        binaryProd = binaryProd * 10 + sum[i--];
    return binaryProd;
}
 
int main()
{
 
    long bin1, bin2, multiply=0; 
    int i = 0, rem = 0, sum[20], digit, factor = 1;
   
    while(1){
    printf("\nEnter the operation :\n");
    printf("1.Addition\n2.Multiplication\n3.Exit\n");

    int op;
    scanf("%d",&op);

    //Addition
    if(op==1){
    printf("Enter the first binary number: ");
    scanf("%ld", &bin1);
    printf("Enter the second binary number: ");
    scanf("%ld", &bin2);
    while (bin1 != 0 || bin2 != 0){
        sum[i++] =(bin1 % 10 + bin2 % 10 + rem) % 2;
        rem =(bin1 % 10 + bin2 % 10 + rem) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }
    if (rem != 0)
        sum[i++] = rem;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
        printf("%d", sum[i--]);
    printf("\n");
    }


    //Multiplication
    else if(op==2){
    printf("Enter the first binary number: ");
    scanf("%ld", &bin1);
    printf("Enter the second binary number: ");
    scanf("%ld", &bin2);
    while (bin2 != 0)
    {
        digit =  bin2 % 10;
        if (digit == 1)
        {
            bin1 = bin1 * factor;
            multiply = bin_prod(bin1, multiply);
        }
        else
            bin1 = bin1 * factor;
        bin2 = bin2 / 10;
        factor = 10;
    }
    printf("Product of two binary numbers: %ld", multiply);
    printf("\n");

    }

    //Exit
    else if(op==3){
          break;
      }
    }

    return 0;
}
