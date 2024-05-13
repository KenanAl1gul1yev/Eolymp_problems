#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m = 1;
    scanf("%d", &n);
    while (n > 0){
        m *= n % 10;
        n /= 10;
    }
    printf("%d", m);
    return 0;
}
