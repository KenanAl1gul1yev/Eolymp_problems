#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0){
        n *= -1;
    }
    printf("%d\n", n / 100);
    printf("%d\n", n / 10 % 10);
    printf("%d\n", n % 10);
    return 0;
}
