#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n + 1;  ; i ++ ){
        if (i % 10 == 0){
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}
