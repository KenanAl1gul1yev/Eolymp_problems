#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if ((n >= -99 && n <=-10) || (n >= 10 && n <= 99)){
        printf("Ok");
    }
    else{
        printf("No");
    }
    return 0;
}
