#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long n, m, z, k, sum;
    scanf("%lld %lld", &n, &m);

    for (long long i = n; i <= m; i++){
        long long arr[4];
        z = 0;
        k = i;
        while (k > 0){
            arr[z] = k % 10;
            k /= 10;
            z += 1;
        }
        sum = 0;
        for (long long j = 0; j < 4; j++){
            sum += pow(arr[j], 4);
        }
        if (sum == i){
            printf("%lld ", i);
        }
    }
    return 0;
}
