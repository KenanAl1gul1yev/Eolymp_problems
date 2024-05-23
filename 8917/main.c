#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i ++){
        if (pow(2, i) < n){
            printf("%d ", (int) pow(2, i));
        }
        else{
            return 0;
        }
    }
    return 0;
}
