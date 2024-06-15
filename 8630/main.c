#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, maks = 0;
    scanf("%lld", &n);
    while (n > 0){
        if (n % 10 > maks){
            maks = n % 10;
        }
        n /= 10;
    }
    printf("%lld", maks);
    return 0;
}
