#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, div = 1;
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0 && n / i > div){
            div = n / i;
        }
    }
    printf("%d", div);
    return 0;
}
