#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    for (long long i = a; i <= b; i++){
        printf("%lld ", i * i);
    }
    printf("\n");
    for (long long j = b; j >= a; j--){
        printf("%lld ", j * j * j);
    }

    return 0;
}
