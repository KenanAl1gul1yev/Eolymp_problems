#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, prev = 100;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        if (x > prev){
            printf("%d ", x);
        }
        prev = x;
    }
    return 0;
}
