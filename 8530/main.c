#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);
    }
    scanf("%d %d", &m, &k);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < k; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
