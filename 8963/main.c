#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, minima = 100, j = 0;
    scanf("%d", &n);
    int arr[n];
    int v[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x < minima){
            minima = x;
        }
    }
    for (int i = 0; i < n; i++){
        if(arr[i] == minima){
            v[j] = minima;
            j += 1;
        }
    }

    for (int i = 0; i < n; i++){
        if(arr[i] != minima){
            v[j] = arr[i];
            j += 1;
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    return 0;
}
