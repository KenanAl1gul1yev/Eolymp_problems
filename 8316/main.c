#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 0;
    char arr[100];
    while (scanf("%c", &arr[k]) != EOF){
        if (arr[k] == '\n') break;
        k += 1;
    }

    for (int i = 0; i < k; i++){
        for (int j = i + 1; j < k; j++){
            if (arr[i] > arr[j]){
                char tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < k; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
    for (int i = k - 1; i >= 0; i--){
        printf("%c", arr[i]);
    }
    return 0;
}
