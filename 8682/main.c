#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long n, cnt = 0, sum = 0;
    scanf("%lld", &n);
    while (n > 0){
        if (n % 2 != 0){
            sum += (n % 10) * pow(10, cnt);
            cnt += 1;
        }
        n /= 10;
    }
    printf("%lld", sum);
    return 0;
}
