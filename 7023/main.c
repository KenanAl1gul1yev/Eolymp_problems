#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, p, c, z;
    while (1){
        scanf("%d %d", &n, &r);
        if (n == 0 && r == 0) break;
        int arr[n + 1];
        int res[n + 1];
        for (int i = 1; i <= n; i++) arr[i] = n - i + 1;
        for (int i = 0; i < r; i++){
            scanf("%d %d", &p, &c);
            z = 1;
            for (int j = p; j < p + c; j++){
                res[z] = arr[j];
                z += 1;
            }
            for (int j = 1; j < p; j++){
                res[z] = arr[j];
                z += 1;
            }
            for (int j = p + c; j <= n; j++){
                res[z] = arr[j];
                z += 1;
            }
            for (int j = 1; j <= n; j++) arr[j] = res[j];
        }
        printf("%d\n", res[1]);
    }
    return 0;
}
