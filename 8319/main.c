#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    char x;
    scanf("%d %c %d", &n1, &x, &n2);
    if (x == '+') printf("%d", n1 + n2);
    if (x == '-') printf("%d", n1 - n2);
    if (x == '*') printf("%d", n1 * n2);
    if (x == '/') printf("%d", n1 / n2);
    return 0;
}
