#include<stdio.h>

int main()
{
    while(true)
    {
        int op;
        printf("Select a operation: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
        scanf("%d",&);

        
        if(op==1){
            long long int num1,num2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld", &num1,&num2);
            long long int sum=num1+num2;
            printf("Sum is: %lld \n",sum);
        }

        
        else if(op==2){
            long long int num1,num2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld",&num1,&num2);
            printf("Product is: %lld \n",num1*num2);
        }
               
        else{
            printf("Exited.");
            break;
        }
    }
    return 0;
}
