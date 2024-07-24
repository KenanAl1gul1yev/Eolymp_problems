#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, cnt, k, z;
    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++){
        int arr[4];
        cnt = 0;
        k = i;
        z = 0;
        while (k > 0){
            arr[z] = k % 10;
            k /= 10;
            z += 1;
        }

        for (int j = 0; j < 4; j ++){
            for (int l = j + 1; l < 4; l ++){
                if (arr[j] == arr[l]){
                    cnt += 1;
                }
            }
        }
        if (cnt == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
