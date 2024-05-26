#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a;
    scanf("%lld", &a);
    printf("%lld %lld", 2 * (a * a + a * a + a * a), a * a * a);
    return 0;
}
