    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int n, a, b, c, y1, y2, y3;
        scanf("%d", &n);
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;

        y1 = 10 * a + b;
        y2 = 10 * a + c;
        y3 = 10 * b + c;

        if (y1 >= y2 && y1 >= y3){
            printf("%d", y1);
        }
        else if (y2 >= y1 && y2 >= y3){
            printf("%d", y2);
        }
        else if (y3 >= y1 && y3 >= y2){
            printf("%d", y3);
        }

        return 0;
    }
