#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if ((n - 1) % 2 != 0){
        printf("%d", n - 2);
    }
    else{
        printf("%d", n - 1);
    }
    return 0;
}
