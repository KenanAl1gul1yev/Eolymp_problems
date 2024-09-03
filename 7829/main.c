#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    double arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%lf", &arr[i]);
    }

    double sum = 0;
    for (int i = 0 ; i < n; i++){
        sum += arr[i];
    }

    printf("%.1lf", sum);

    return 0;
}
