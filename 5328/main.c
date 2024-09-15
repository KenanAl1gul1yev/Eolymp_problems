#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, minima;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    minima = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < minima){
            minima = arr[i];
        }
    }

    printf("%d", minima);

    return 0;
}
