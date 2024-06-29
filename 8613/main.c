#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x, y;
    scanf ("%lld", &x);
    if (x >= 13){
        y = 3 * x * x * x + 4 * x * x + 5 * x + 6;
    }
    else{
        y = 3 * x * x * x - 2 * x * x - 3 * x - 4;
    }
    printf("%lld", y);
    return 0;
}
