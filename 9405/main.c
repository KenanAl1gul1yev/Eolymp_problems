#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, blue, red, yellow;
    scanf("%d %d %d", &n, &a, &b);
    blue = a + b - n;
    yellow = a - blue;
    red = b - blue;
    printf("%d %d %d", blue, red, yellow);
    return 0;
}
