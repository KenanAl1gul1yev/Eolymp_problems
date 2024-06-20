#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, d, e;
    scanf("%d", &n);
    a = n / 10000;
    b = n / 1000 % 10;
    c = n / 100 % 10;
    d = n / 10 % 10;
    e = n % 10;

    if (   a == b
        || a == c
        || a == d
        || a == e
        || b == c
        || b == d
        || b == e
        || c == d
        || c == e
        || d == e){
            printf("YES");
        }
    else{
        printf("NO");
    }

    return 0;
}
