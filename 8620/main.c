#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    a = n / 1000;
    b = n / 100 %  10;
    c = n / 10 % 10;
    d = n % 10;
    if ((a == b && a == c && a != d) || (a == c && a == d && a != b) || (a == b && a == d && a != c) || (b == c && b == d && a != b)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
