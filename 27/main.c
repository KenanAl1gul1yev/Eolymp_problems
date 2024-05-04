#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int counter(int n){
    int cnt = 0;
    while (n > 0){
        cnt += 1;
        n /= 2;
    }
    return cnt;
}

int main()
{
    int n, maks = -1;
    scanf("%d", &n);
    int count = counter(n);
    for (int i = 0; i < count; i++){
        if (n > maks) maks = n;
        if (count == counter(n)){
            n -=  pow(2, count - 1);
            n *= 2;
            n += 1;
        }
        else{
            n *= 2;
        }
    }
    printf("%d", maks);
    return 0;
}
