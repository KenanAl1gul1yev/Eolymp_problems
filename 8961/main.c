#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, tmp, minima = 100, index;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x < minima){
            minima = x;
            index = i;
        }
    }
    tmp = arr[0];
    arr[0] = arr[index];
    arr[index] = tmp;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
