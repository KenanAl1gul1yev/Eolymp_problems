#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int sum = 0;
    while (scanf("%c", &x) != EOF){
        if ((int)x % 2 == 0 && x >= '0' && x <= '9') sum += ((int)x - 48);
    }
    printf("%d", sum);
    return 0;
}
