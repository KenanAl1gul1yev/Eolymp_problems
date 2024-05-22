#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, cnt = 0, sum = 0;
    scanf("%d", &n);

    while (n > 0){
        if (n % 2 == 0){
            sum += (n % 10 + 1) * pow(10, cnt);
        }
        else if (n % 2 != 0){
            sum += (n % 10 - 1) * pow(10, cnt);
        }
        cnt += 1;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}
