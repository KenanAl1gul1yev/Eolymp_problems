#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n % 10;
    if ((a == 3 && b == 7) || (b == 3 && c == 7) || (c == 3 && d == 7)){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
