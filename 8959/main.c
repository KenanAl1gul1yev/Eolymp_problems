#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, maks = -1, minima = 100;
    scanf("%d", &n);
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        if (x > maks) maks = x;
        if (x < minima) minima = x;
    }
    printf("%d", maks - minima);
    return 0;
}
