#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if ((n + m > k && n - m < k) && (n + k > m && n - k < m) && (k + m > n && k - m < n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
