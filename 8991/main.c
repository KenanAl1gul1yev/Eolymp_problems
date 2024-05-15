#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    while (scanf("%c", &x) != EOF){
        if (x >= 97 && x <= 122) printf("%c%c", x, x);
        else printf("%c", x);
    }
    return 0;
}
