#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int A[a][b];
    int B[a][b];
    for (int i = 0 ; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0 ; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0 ; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
