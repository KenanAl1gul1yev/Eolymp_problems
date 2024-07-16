#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[100];
    char target;
    int cnt = 0;
    gets(arr);
    scanf("%c", &target);
    for (int i = 0; i < (int)strlen(arr); i++){
        if (arr[i] == target || arr[i] == target + 32 || arr[i] == target - 32) cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
