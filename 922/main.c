#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int res[n];
    for (int i = 0 ;i < n; i++) scanf("%d", &arr[i]);
    res[0] = arr[n -1];
    for (int i = 0; i < n -1 ; i++) res[i + 1] = arr[i];
    for (int i = 0; i < n; i++) printf("%d ", res[i]);
    return 0;
}
