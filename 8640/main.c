#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, cnt, k;
    scanf("%d %d", &n, &m);
    for (int i = n; i <= m; i++){
        cnt = 0;
        k = i;
        while (k > 0){
            if (k % 2 == 0) cnt += 1;
            k /= 10;
        }
        if (cnt == 0) printf("%d ", i);
    }
    return 0;
}
