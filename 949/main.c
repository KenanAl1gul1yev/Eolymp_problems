#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", 10 * (n / 100 % 10) + n / 10 % 10);
    return 0;
}
