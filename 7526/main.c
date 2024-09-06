#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t, x, sum = 0, cnt = 0;
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i ++){
        scanf("%d", &x);
        sum += x;
        if (sum <= t) cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}
