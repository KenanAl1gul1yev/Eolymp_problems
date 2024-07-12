#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    printf("%d %d %d", n / 100, n / 10 % 10, n % 10);
    return 0;
}
