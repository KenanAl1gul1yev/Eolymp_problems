#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char x, last_x = ' ';
    bool is_a = 0;
    while (scanf("%c", &x) != EOF){
        if (x == 'a'){
            if (is_a != 0) printf("a");
            is_a = 1;
        }
        else if (x == 'b' && last_x == 'a') printf("ups"), is_a = 0;
        else if (is_a == 1) printf("a%c", x), is_a = 0;
        else printf("%c", x);
        last_x = x;
    }
    return 0;
}
