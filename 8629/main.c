#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n %  10;

    if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1 || d % 2 == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
