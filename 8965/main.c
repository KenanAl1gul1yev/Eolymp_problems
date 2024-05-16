#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, minima = 100;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x < minima){
            minima = x;
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i] - (minima / 2));
    }

    return 0;
}
