#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, flag = 0;
    scanf("%d", &n);

    if (n % 3 == 0){
        flag += 1;
    }
    if (n % 2 == 0 && ((n >= 10 && n <= 99) || (n >= -99 && n <= -10))){
        flag += 1;
    }

    if (flag != 2){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}
