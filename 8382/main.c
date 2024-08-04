#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int len = 0, cnt = 0;
    bool is_lower = 0, is_upper = 0, is_digit = 0, is_symbol = 0;
    char x;

    while (scanf("%c", &x) != EOF){
        if (x == '\n') break;
        if (x >= 'a' && x <= 'z') is_lower = 1;
        if (x >= 'A' && x <= 'Z') is_upper = 1;
        if (x >= '0' && x <= '9') is_digit = 1;
        if (x >= 33 && x <= 43) is_symbol = 1;
        len += 1;
    }
    if (is_lower == 1) cnt += 1;
    if (is_upper == 1) cnt += 1;
    if (is_digit == 1) cnt += 1;
    if (is_symbol == 1) cnt += 1;
    if (len >= 8) cnt += 1;
    printf("%d", cnt);
    return 0;
}
