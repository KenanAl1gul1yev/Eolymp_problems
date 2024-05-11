#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = 0;
    int cnt = 0;
    double x;
    for (int i = 0; i < n; i++){
        scanf("%lf", &x);
        if (x < 0){
            cnt += 1;
            sum += x;
        }
    }

    printf("%d %.2lf", cnt, sum);

    return 0;
}
