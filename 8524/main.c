#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &x);
            if (x > 0) sum += x;
        }
    }
    printf("%d", sum);
    return 0;
}
