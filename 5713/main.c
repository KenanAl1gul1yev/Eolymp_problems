#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, minima, maks;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    minima = arr[0];
    maks = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < minima){
            minima = arr[i];
        }
        if (arr[i] > maks){
            maks = arr[i];
        }
    }

    printf("%d", maks - minima);

    return 0;
}
