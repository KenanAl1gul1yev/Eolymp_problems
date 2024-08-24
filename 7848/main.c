#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, tmp;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < (n / 2) * 2; i += 2){
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
