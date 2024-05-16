#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = -1, last, i = 0;
    char x;
    while (scanf("%c", &x) != EOF){
        if (x == ' '){
            if (first == -1) first = i;
            last = i;
        }
        i += 1;
    }
    if (first == -1){
        printf("-1");
        return 0;
    }
    printf("%d %d", first, last);
    return 0;
}
