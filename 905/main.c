#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if (n != m && n != k && m != k){
        printf("3");
    }
    else if (n == m && k == n){
        printf("1");
    }
    else{
        printf("2");
    }
    return 0;
}
