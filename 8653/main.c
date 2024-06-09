#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, x = 0;
    char operand[8];
    while (scanf("%s %d", operand, &num) != EOF){
        if (operand[0] == 's') x -= num;
        else if (operand[0] == 'm') x *= num;
        else if (operand[0] == 'a') x += num;
    }
    printf("%d\n", x);
    return 0;
}
