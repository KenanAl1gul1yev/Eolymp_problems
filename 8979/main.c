#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cnt = 0;
    char x;
    while (scanf("%c", &x) != EOF){
        if (x == 'a'){
            printf("a");
            cnt += 1;
        }
    }
    if (cnt == 0){
        printf("-1");
        return 0;
    }
    return 0;
}
