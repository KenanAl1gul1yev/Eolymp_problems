#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, z;
    scanf("%d %d", &n, &m);
    z = (n > m) ? n - m : m - n;
    printf("%d", z);
    return 0;
}
