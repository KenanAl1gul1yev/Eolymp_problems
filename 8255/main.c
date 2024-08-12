#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, s;
    scanf("%d %d", &n, &s);
    for (int i = (int)pow(10, n - 1); i < pow(10, n); i++){
        int curr_sum = 0;
        int k = i;
        while (k > 0){
            curr_sum += k % 10;
            k /= 10;
        }
        if (curr_sum == s) printf("%d\n", i);
    }
    return 0;
}
