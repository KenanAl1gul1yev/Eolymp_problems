#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", (n % 10) % (n / 100));
    return 0;
}
