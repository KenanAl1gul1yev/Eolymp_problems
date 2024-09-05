#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, total;
    scanf("%d %d %d", &a, &b, &c);

    total = a + b + c;
    if (total % 2 != 0){
        printf("-1");
        return 0;
    }
    if (a == total / 2 || b == total / 2 || c == total / 2){
         printf("0");
         return 0;
    }
    if (a >= b || a >= c){
        printf("1\n%d %d", total / 2 - a, 2 * a - total / 2);
        return 0;
    }
    if (b >= a || b >= c){
        printf("2\n%d %d", total / 2 - b, 2 * c - total / 2);
        return 0;
    }
    if (c >= b || c >= a){
        printf("3\n%d %d", total / 2 - c, 2 * c - total / 2);
        return 0;
    }

    return 0;
}
