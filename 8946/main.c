#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        if (i % 2 != 0){
            printf(" ");
        }
        for (int j = 1; j < n - i % 2 + 1; j++){
            if (j % 2 != 0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
