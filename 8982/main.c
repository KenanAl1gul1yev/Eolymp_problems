#include <stdio.h>
#include <stdlib.h>

int main()
{
    int is_a = 0, i = 0;
    char x;
    while (scanf("%c", &x) != EOF){
        if (x == 'a'){
            printf("%d ", i);
            is_a = 1;
        }
        i += 1;
    }
    if (is_a == 0){
        printf("-1");
        return 0;
    }
    return 0;
}
