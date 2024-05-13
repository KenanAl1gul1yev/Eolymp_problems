#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = 0;
    double cnt = 0;
    double x;
    for (int i = 0; i < n; i++){
        scanf("%lf", &x);
        if (x > 0){
            cnt += 1;
            sum += x;
        }
    }

    if (cnt == 0){
        printf("Not Found");
        return 0;
    }

    printf("%.2lf", sum / cnt);

    return 0;
}
