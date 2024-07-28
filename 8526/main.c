#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x < -4){
        printf("%d", x + 5);
    }
    else if(x > 7){
        printf("%d", x * x * x + 2 * x);
    }
    else{
        printf("%d", x * x - 3 * x);
    }
    return 0;
}
