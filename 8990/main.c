#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    while (scanf("%c", &x) != EOF){
        if (x == 'a') printf("aa");
        else if (x == 'e') printf("ee");
        else if (x == 'i') printf("ii");
        else if (x == 'o') printf("oo");
        else if (x == 'u') printf("uu");
        else if (x == 'y') printf("yy");
        else printf("%c", x);
    }
    return 0;
}
