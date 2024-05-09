#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, minima = 100, maks = -100;
    scanf("%d", &n);
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        if (x < minima) minima = x;
        if (x > maks) maks = x;
    }
    printf("%d", maks + minima);
    return 0;
}
