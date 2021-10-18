#include<stdio.h>
#include<string.h>

int main(){

  while(1){
    int op;
    
    //taking the prefered operation from user
    printf("Please choose an operation : \n1. Addition \n2. Multiplication \n3. Exit\n");
    
   
    scanf("%d",&op);
    char unary_1[100], unary_2[100],temp[100];

    //For non-exit operation
    if(op!=3){
        printf("Please enter two unary numbers: \n");
        scanf("%s %s", unary_1, unary_2);
    
        //Addition
        if(op == 1){ 
        strcpy(temp,unary_2);
        strcat(unary_2, unary_1);
        printf("The sum of  %s and %s is : %s\n",unary_1, temp, unary_2);
        }
        //Multiplication     
        else if(op == 2){
        printf("The product of %s and %s  is: ",unary_1,unary_2);
        for(int i=0; i<strlen(unary_1);i++){
            printf("%s", unary_2);
        }
        printf("\n");
       }
      
    }
    //Code for exit operation
    else if(op==3){
       printf("Exited");
       break;
    }
  }
  return 0;
}
