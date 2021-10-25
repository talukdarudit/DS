#include <stdio.h>

int hashVal(char *str){
    int i=0;
    int val=0;
    while(str[i]!='\0'){
        val+=(int)str[i];
        i++;
    }

    return (val*i)%1000;
}

int main(){
    char* string;
    scanf("%[^\n]%*c", string);

    int hash=hashVal(string);
    printf("%d", hash);
    return 0;
}
