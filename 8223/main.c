#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char str[100];
    gets(str);
    scanf("%d %d", &a, &b);
    a -= 1;
    b -= 1;
    int k = a + 1;
    printf("%d\n", b - a + 2);
    for (int i = a; i <= k; i++){
        if (i == b) break;
        else if (i == k) {
         k += 1;
         i = a - 1;
         printf("\n");
        }
        else printf("%c", str[i]);
    }
    return 0;
}
