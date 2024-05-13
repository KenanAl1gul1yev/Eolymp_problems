#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, a, b, time_for_reloads, remain_cartiges;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    time_for_reloads = n / m;
    if (n % m != 0) time_for_reloads += 1;
    printf("%d\n", a * time_for_reloads + n * b);
    return 0;
}
