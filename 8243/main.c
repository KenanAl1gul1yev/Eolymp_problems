#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    if (n < 0){
        n *= -1;
    }

    while (n > 10){
        n /= 10;
    }
    if (n == 10){
        printf("1");
        return 0;
    }
    printf("%lld", n % 10);
    return 0;
}
