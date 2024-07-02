#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x, prev, next;
    scanf("%c", &x);
    prev = (char)((int)x - 1);
    next = (char)((int)x + 1);
    printf("%c %c", prev, next);
    return 0;
}
