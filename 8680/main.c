#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n - 1; i++){
        if (arr[i -1] % 2 == 0 && arr[i + 1] % 2 == 0) cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}
