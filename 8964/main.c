#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, maks = -100, j;
    scanf("%d", &n);
    int arr[n];
    int v[n];
    j = n - 1;
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x > maks){
            maks = x;
        }
    }
    for (int i = 0; i < n; i++){
        if(arr[i] == maks){
            v[j] = maks;
            j -= 1;
        }
    }

    for (int i = n - 1; i >= 0; i--){
        if(arr[i] != maks){
            v[j] = arr[i];
            j -= 1;
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    return 0;
}
