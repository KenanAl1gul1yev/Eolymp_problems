#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if (n % m == 0 && n % k == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
