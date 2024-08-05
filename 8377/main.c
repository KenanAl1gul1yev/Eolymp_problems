#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, cnt, sum;
    while (scanf("%d", &x) != EOF){
        cnt = 0;
        while (x > 9){
            sum = 1;
            cnt += 1;
            while (x > 0){
                sum *= x % 10;
                x /= 10;
            }
            x = sum;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
