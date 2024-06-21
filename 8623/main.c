#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, y = 0;
    scanf("%d", &n);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if (a > b && a > c){
        y += 100 * a;
        if (b > c){
            y += 10 * b + c;
        }
        else{
            y += 10 * c + b;
        }
    }
    else if (b > a && b > c){
        y += 100 * b;
        if (a > c){
            y += 10 * a + c;
        }
        else{
            y += 10 * c + a;
        }
    }
    else{
        y += 100 * c;
        if (a > b){
            y += 10 * a + b;
        }
        else{
            y += 10 * b + a;
        }
    }
    printf("%d", y *  y);
    return 0;
}
