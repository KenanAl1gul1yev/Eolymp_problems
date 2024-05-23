#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, flag = 0;
    scanf("%d", &n);

    if (n % 2 == 0 && n >= 0){
        flag += 1;
    }
    if (n % 2 != 0 && n < 0){
        flag += 1;
    }

    if (flag == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
