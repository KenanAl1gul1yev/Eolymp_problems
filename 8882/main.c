#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b, c, d;
    scanf ("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (a == b && a == c && a == d){
        printf("%lld", a * a);
    }
    else{
        printf("No");
    }
    return 0;
}
