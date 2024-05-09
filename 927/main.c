#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, sum = 0;
    double y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d %lf", &x, &y);
        if (y < 50){
            sum += x;
        }
    }

    printf("%d", sum);

    return 0;
}
