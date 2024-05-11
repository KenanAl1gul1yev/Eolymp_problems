#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 12 || n == 1 || n == 2){
        printf("Winter");
    }
    else if (n >= 3 && n <= 5){
        printf("Spring");
    }
    else if (n >= 6 && n <=8){
        printf("Summer");
    }
    else{
        printf("Autumn");
    }

    return 0;
}
