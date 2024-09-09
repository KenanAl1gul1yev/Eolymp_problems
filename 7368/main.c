#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, m, minima, maks, sum, cnt;
    scanf("%lf %lf", &n, &m);
    double res[(int)m];
    for (int i = 0; i < m; i++){
        minima = 10, maks = -1, sum = 0, cnt = 0;
        double arr[(int)n];
        for (int j = 0; j < n; j++){
            scanf("%lf", &arr[j]);
            if (arr[j] > maks) maks = arr[j];
            if (arr[j] < minima) minima =  arr[j];
        }
        for (int j = 0; j < n; j++){
            if (arr[j] != minima && arr[j] != maks) sum += arr[j], cnt += 1;
        }
        res[i] = sum / cnt;
    }
    for (int i = 0; i < m; i++){
        printf("%.2lf ", res[i]);
    }
    return 0;
}
