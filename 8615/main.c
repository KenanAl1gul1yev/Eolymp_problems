#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if ((n <= k && n >= m) || (n >= k && n <= m)){
        printf("IN");
    }
    else{
        printf("OUT");
    }
    return 0;
}
