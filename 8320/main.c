#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    gets(str);
    for (int i = 0; i < (int)strlen(str); i ++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
            int cnt = 0;
            for (int j = i; j < (int)strlen(str); j++){
                if (str[j] == ' ' || j == (int)strlen(str) - 1) {
                    i += cnt;
                    break;
                }
                cnt += 1;
            }
        }
    }
    printf("%s", str);
    return 0;
}
