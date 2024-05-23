#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0){
        n -= 1;
    }
    else{
        n -= 2;
    }
    for (int i = 1; i <= n; i += 2){
        printf("%d ", i);
    }
    return 0;
}
