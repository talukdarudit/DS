#include <stdio.h>

int strlen(char* str){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

int isValidEmail(char* email){
    int at=0, dot=0;
    if((email[0]>='a' && email[0]<='z') || (email[0]>='A' && email[0]<='Z')){
        for(int i=1; i<=strlen(email); ++i){
            if(email[i]=='@'){
                at=i;
            }
            if(email[i]=='.'){
                dot=i;
            }
        }
        if(at==0 || dot==0){
            return 0;
        }
        else if(at>dot){
            return 0;
        }
        else if(dot== at+1){
            return 0;
        }
        else if(dot >= strlen(email)-1){
            return 0;
        }
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char email[100];
    scanf("%[^\n]%*c", email);

    if(isValidEmail(email)==1){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}
