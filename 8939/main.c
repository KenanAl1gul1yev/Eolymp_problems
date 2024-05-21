#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0 ; i < 4; i++){
        for (int i = 0; i < n; i++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
