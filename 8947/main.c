#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if (i % 4 == 0){
            printf("*\n");
        }
        else if (i % 2 == 0){
            for (int j = 0; j < n - 1; j++){
                printf(" ");
            }
            printf("*\n");
        }
        else{
            for (int j = 0; j < n; j++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
