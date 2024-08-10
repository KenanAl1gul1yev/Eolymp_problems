#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    gets(str);
    for (int i = 0 ; i < (int)strlen(str); i++){
        if (str[i] != '3' && str[i] != '9') printf("%c", str[i]);;
    }
    return 0;
}
