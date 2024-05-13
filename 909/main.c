#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x, last_x = ' ';
    int count_words = 0;
    while (scanf("%c", &x) != EOF){
        if (((x <= 64 || x >= 123) || (x >= 91 && x <= 96)) && ((last_x >= 65 && last_x <= 90) || (last_x >= 97 && last_x <= 122))) {
            count_words += 1;
        }
        last_x = x;
    }
    printf("%d\n", count_words);
    return 0;
}
