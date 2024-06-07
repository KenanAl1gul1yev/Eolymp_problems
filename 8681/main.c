#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, cnt = 1;
    scanf("%lld", &n);
    while (n > 0){
        if (n % 10 != 0){
            cnt *= n % 10;
        }
        n /= 10;
    }
    printf("%lld", cnt);
    return 0;
}
