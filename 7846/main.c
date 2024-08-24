#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, maks = -100, count = 0, num;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        arr[i] = x;
        if (x > maks) maks = x;
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == maks){
            count = i;
            num = arr[i];
            break;
        }
    }
    printf("%d %d", num, count + 1);
    return 0;
}
