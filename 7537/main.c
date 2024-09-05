#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, k, x, sum, maks, index;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &k);
        maks = -1;
        sum = 0;
        bool no_winner = 0;
        index = 0;
        for (int j = 0; j < k; j++){
            scanf("%d", &x);
            if (x == maks) no_winner = 1;
            if (x > maks) maks = x, index = j, no_winner = 0;
            sum += x;
        }
        if ((maks > sum / 2) && no_winner == 0) printf("majority winner %d\n", index + 1);
        if ((maks <= sum / 2) && no_winner == 0) printf("minority winner %d\n", index + 1);
        if (no_winner == 1) printf("no winner\n");
    }
    return 0;
}
