#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 3){
        printf("Initial");
    }
    else if (n >= 4 && n <= 6){
        printf("Average");
    }
    else if (n >= 7 && n <= 9){
        printf("Sufficient");
    }
    else{
        printf("High");
    }
    return 0;
}
