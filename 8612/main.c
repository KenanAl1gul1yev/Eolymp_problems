#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    if (x >= 0){
        y = x * x * x + 2 * x * x + 4 * x - 6;
    }
    else{
        y = x * x * x - 7 * x;
    }
    printf("%d", y);
    return 0;
}
