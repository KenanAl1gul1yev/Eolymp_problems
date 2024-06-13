#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, odd = 0;
    scanf("%lld", &n);
    while (n > 0){
        if (n % 2 != 0){
            odd += 1;
        }
        n /= 10;
    }
    printf("%lld", odd);
    return 0;
}
