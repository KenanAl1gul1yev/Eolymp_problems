#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while (n > 0){
        if  ((n / 10) % 10 < n % 10){
            count += 1;
        }
        n /= 10;
    }
    if (count != 5){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}
