#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maks = -101, last_maks = -101, index;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] > maks) maks = arr[i], index = i;
    }
    for (int i = 0; i < n; i++){
        if (arr[i] > last_maks && i != index) last_maks = arr[i];
    }
    printf("%d", maks + last_maks);
    return 0;
}
