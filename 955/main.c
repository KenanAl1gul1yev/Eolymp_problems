#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    printf("%d", (n % 10 + n / 10 % 10 + n / 100 % 10 + n / 1000) * (n % 10 + n / 10 % 10 + n / 100 % 10 + n / 1000));
    return 0;
}
