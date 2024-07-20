#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i < j && (arr[i] + arr[j]) % k == 0){
                count += 1;
            }
        }
    }
    printf("%d", count);
    return 0;
}
