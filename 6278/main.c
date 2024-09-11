#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    if ((n % 2 == 0 && k % 2 == 0) || (n % 2 == 1 && k % 2 == 1)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
