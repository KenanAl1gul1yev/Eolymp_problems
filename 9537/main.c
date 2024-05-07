#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int A[a][b];
    for (int i = 0 ; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0 ; i < b; i++){
        for (int j = 0; j < a; j++){
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}
