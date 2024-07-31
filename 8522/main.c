#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n % m == 0){
        printf("Divisible");
    }
    else{
        printf("%d %d", n / m, n % m);
    }
    return 0;
}
