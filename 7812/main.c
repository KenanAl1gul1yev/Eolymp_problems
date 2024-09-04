#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k, j, max;
    scanf ("%d %d %d %d", &n, &m, &k, &j);
    max = n;
    if (m > max){
        max = m;
    }

    if (k > max){
        max = k;
    }

    if (j > max){
        max = j;
    }

    printf("%d", max);
    return 0;
}
