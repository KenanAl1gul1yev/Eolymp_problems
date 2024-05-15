#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, c;
    scanf("%d", &n);
    a = n / 100;
    c = n % 10;
    if (a > c){
        printf("%d", a);
    }
    else if (a < c){
        printf("%d", c);
    }
    else{
        printf("=");
    }

    return 0;
}
