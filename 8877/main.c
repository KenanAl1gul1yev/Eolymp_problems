#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;
    scanf("%d", &x);

    y = (int)sqrt(x);
    if (y * y == x){
        printf("%d", y);
    }
    else{
        printf("No");
    }

    return 0;
}
