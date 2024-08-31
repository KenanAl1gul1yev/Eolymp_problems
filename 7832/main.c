#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, maks = -100, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x > maks) maks = x;
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == maks) count += 1;
    }
    printf("%d", count);
    return 0;
}
