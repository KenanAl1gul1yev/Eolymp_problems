#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, m, maks = 0, cnt = 0;
    scanf("%lld", &n);
    m = n;
    while (n > 0){
        if (n % 10 > maks){
            maks = n % 10;
        }
        n /= 10;
    }
    while (m > 0){
        if (m % 10 == maks){
            cnt += 1;
        }
        m /= 10;
    }
    printf("%lld", cnt);
    return 0;
}
