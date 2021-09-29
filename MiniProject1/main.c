#include <stdio.h>

#define MAX 4200

void strSum(char *res, char *str1, char *str2)
{
    int carry = 0;
    for (int i = MAX - 1; i >= 0; i--)
    {
        int digit = (str1[i] - '0') + (str2[i] - '0') + carry;
        res[i] = (digit % 10) + '0';
        carry = digit / 10;
    }
}

void strcopy(char *str1, char *str2)
{
    for (int i = 0; i < MAX; ++i)
    {
        str2[i] = str1[i];
    }
}

int fibonacci(int n)
{
    char a[MAX], b[MAX], c[MAX];
    for(int i=0; i<MAX; ++i){
        a[i]=b[i]=c[i]='0';
    }
    b[MAX-1] = '1';
    int i;
    if (n < 2)
    {
        printf("%c", n+'0');
    }
    else
    {
        for (i = 2; i <= n; ++i)
        {
            strSum(c, a, b);
            strcopy(b, a);
            strcopy(c, b);
        }
        int firstInt=0;
        for(i=0; i<MAX; ++i){
            if(b[i]!='0'){
                break;
            }
            firstInt++;
        }
        for(i=firstInt; i<MAX; ++i){
            printf("%c", b[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
