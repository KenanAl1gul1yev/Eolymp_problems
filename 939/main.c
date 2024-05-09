#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m = 0;
    scanf("%d", &n);
    while (n > 0){
        m += n % 10;
        n /= 10;
    }
    printf("%d", m * m);
    return 0;
}
