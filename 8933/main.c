#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 0; i --){
        printf("%d sek\n", i);
    }
    return 0;
}
