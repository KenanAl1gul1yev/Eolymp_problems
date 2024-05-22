#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("%d OK\n", i + 1);
    }

    return 0;
}
