#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x, minima = 'z';
    int cnt = 0;
    while (scanf("%c", &x) != EOF){
        if (x < 65) break;
        if (x == minima){
            cnt += 1;
        }
        else if (x < minima){
            cnt = 1;
            minima = x;
        }
    }
    printf("%c %d", minima, cnt);
    return 0;
}
