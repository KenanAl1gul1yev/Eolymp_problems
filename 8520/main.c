#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x < 5){
        printf("%d", x * x - 3 * x + 4);
    }
    else{
        printf("%d", x + 7);
    }
    return 0;
}
