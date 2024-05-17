#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, tmp, maks = -100, index;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x >= maks){
            maks = x;
            index = i;
        }
    }
    tmp = arr[n - 1];
    arr[n - 1] = arr[index];
    arr[index] = tmp;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
