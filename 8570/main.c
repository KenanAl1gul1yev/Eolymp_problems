#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    while (scanf("%s", &str) != EOF){
        printf("%d ", strlen(str));
    }
    return 0;
}
