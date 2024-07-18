#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int cnt = 0;
    while (scanf("%c", &x) != EOF){
        cnt += 1;
        printf("%c", x);
    }
    printf("%d", cnt);
    return 0;
}
