#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long a, b, x, begin, end;
    scanf("%lld %lld %lld", &a, &b, &x);
    for (long long i = a; i <= b; i++){
        if (i % x == 0){
            begin = i;
            break;
        }
    }
    for (long long i = b; i >= a; i--){
        if (i % x == 0){
            end = i;
            break;
        }
    }
    printf("%lld", (end / x) - (begin / x) + 1);
    return 0;
}
