#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k, sum = 0;
    scanf("%d %d %d", &n, &m, &k);
    sum += n / k;
    sum += m / k;
    if (n % k != 0){
        sum += 1;
    }
    if (m %k != 0){
        sum += 1;
    }
    printf("%d", sum);
    return 0;
}
