#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cnt_2 = 0, cnt_5 = 0;
    char str[1000];
    gets(str);
    for (int i = 0 ; i < (int)strlen(str); i++){
        if (str[i] == '2') cnt_2 += 1;
        else if (str[i] == '5') cnt_5 += 1;
    }
    if (cnt_2 > cnt_5) printf("2");
    else if (cnt_5 > cnt_2) printf("5");
    else printf("=");
    return 0;
}
