#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] > 0) cnt += 1;
    }
    if (cnt == 0){
        printf("NO");
        return 0;
    }
    printf("%d\n", cnt);
    for (int i = 0; i < n; i++){
        if (arr[i] > 0) printf("%d ", arr[i]);
    }
    return 0;
}
