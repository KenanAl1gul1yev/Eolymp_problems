#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    if (n >= m){
        printf("%lld", n - m);
    }
    else{
        printf("0");
    }
    return 0;
}
