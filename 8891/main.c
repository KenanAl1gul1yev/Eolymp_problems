#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    if (n % 2 == 0){
        count += 1;
    }
    if (n < 0 && n % 3 == 0){
        count += 1;
    }

    if (count != 1){
        printf("NO");
        return 0;
    }
    printf("YES");
    return 0;
}
