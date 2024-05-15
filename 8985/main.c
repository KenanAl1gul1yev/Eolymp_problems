#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    while (scanf("%c", &x) != EOF){
        if (x != 'a'){
            printf("%c", x);
        }
    }
    return 0;
}
