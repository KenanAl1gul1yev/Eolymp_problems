#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    if (n == 0){
        printf("1");
        return 0;
    }
    while (n > 0){
        cnt += 1;
        n /= 10;
    }
    printf("%d", cnt);
    return 0;
}
