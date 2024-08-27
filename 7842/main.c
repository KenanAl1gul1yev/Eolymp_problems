#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        if (i % 2 == 0){
            printf("%d ", x);
        }
    }
    return 0;
}
