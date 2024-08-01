#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x;
    scanf("%lld", &x);
    if (x >= 10){
        printf("%lld", x * x * x + 5 * x);
    }
    else{
        printf("%lld", x * x - 2 * x + 4);
    }
    return 0;
}
