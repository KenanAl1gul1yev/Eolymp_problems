#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, minima = 100, maks = -100;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] > maks) maks = arr[i];
        if (arr[i] < minima) minima = arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == minima) arr[i] = maks;
        else if (arr[i] == maks) arr[i] = minima;
        printf("%d ", arr[i]);
    }
    return 0;
}
