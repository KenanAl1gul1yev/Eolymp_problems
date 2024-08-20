#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char str[100];
    gets(str);
    scanf("%d %d", &a, &b);
    printf("%d\n", b - a + 1);
    a -= 1;
    b -= 1;
    for (int i = a ; i <= b; i++){
        printf("%c", str[i]);
    }
    return 0;
}
