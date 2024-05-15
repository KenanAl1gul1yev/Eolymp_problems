#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    while (scanf("%c", &x) != EOF){
        if (x == 'a'){
            printf("b");
        }
        else if (x == 'b'){
            printf("a");
        }
        else{
            printf("%c", x);
        }
    }
    return 0;
}
