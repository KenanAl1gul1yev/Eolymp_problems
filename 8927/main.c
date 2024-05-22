#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", n);
    return 0;
}
