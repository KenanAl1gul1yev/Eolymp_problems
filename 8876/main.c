#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    scanf("%lf", &x);
    if (x == (int)x){
        printf("Ok");
    }
    else{
        printf("No");
    }
    return 0;
}
