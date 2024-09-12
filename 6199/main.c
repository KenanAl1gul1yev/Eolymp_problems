#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 0 ; i < n; i++){
        scanf("%d", &x);
        if (x % 2 == 0){
            printf("%d is even\n", x);
        }
        else{
            printf("%d is odd\n", x);
        }
    }
    return 0;
}
