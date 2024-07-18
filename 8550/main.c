#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m =  n * n - ceil((n * n) / 2) + 1;
    int k = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i + j) % 2 == 0){
                printf("%d ", k);
                k += 1;
            }
            else{
                printf("%d ", m);
                m += 1;
            }
        }
        printf("\n");
    }
    return 0;
}
