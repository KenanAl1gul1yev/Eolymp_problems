#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, prev = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        if ((x > 0 && prev > 0) || (x < 0 && prev < 0)){
            printf("%d %d\n", prev, x);
        }
        prev = x;
    }
    return 0;
}
