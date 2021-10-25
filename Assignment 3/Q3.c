#include <stdio.h>

void SieveOfEratosthenes(long long n)
{
    long long prime[n + 1];
    for(long long i=0; i<=n; ++i){
        prime[i]=1;
    }
 
    for (long long p = 2; p * p <= n; p++){
        if (prime[p] == 1){
            for (long i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
    for (long long p = 2; p <= n; p++){
        if (prime[p])
            printf("%lld ", p);
    }
}

int main(){
    long long n;
    scanf("%lldd", &n);

    SieveOfEratosthenes(n);
    return 0;
}
