#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n / 1000 == n % 10 && n / 100 % 10 == n / 10 % 10){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
