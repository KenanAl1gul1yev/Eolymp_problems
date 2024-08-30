#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, average = 0, sum = 0, cnt = 0;
    scanf("%lf", &n);
    double arr[(int)n];
    for (int i = 0 ; i < n; i++){
        scanf("%lf", &arr[i]);
        average += arr[i];
    }
    average /= n;
    for (int i = 0; i < n; i++){
        if (arr[i] > average){
            sum += arr[i];
            cnt += 1;
        }
    }

    printf("%d %d", (int)sum, (int)cnt);

    return 0;
}
