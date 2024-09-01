#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, maks = -100, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x > maks) maks = x;
    }
    for (int i = 0; i < n; i++){
        if (arr[i] != maks) sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
