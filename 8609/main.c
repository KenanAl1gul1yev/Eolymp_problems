#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++){
        arr[i] = arr[i - 1] + i;
    }
    printf("%d", arr[n]);
    return 0;
}
