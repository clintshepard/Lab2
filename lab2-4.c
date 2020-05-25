#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 0, k = 0, d = 2, f = 0, y = 0, g = 0;
    double matrix[4][4] = {
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1}
    };
    double matrixx[4][4] = {
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1}
    };

    for (int i = 0; i < 4; i++) {
        while (j < 4) {
            printf("Gimme [%d][%d] = ", i, j);
            scanf_s("%lf ", &matrix[i][j]);
            j++;
        }
        j = 0;
    }
    for (int i = 0; i < 4; i++) {
        if (y == 8)
            break;
        if (i > 1) {
            f = 2;
            g = 0;
        }
        else {
            g = i;
            f = 0;
        }
        while (d < 4) {
            matrixx[i][d] = matrix[g][f];
            f++;
            d++;
            y++;
        }
        d = 2;
        
    }
    g = 2;
    f = 3;
    y = 0;
    d = 0;
    for (int i = 3; i >= 0; i--) {
        if (y == 8)
            break;
        if (i == 3 || i == 1)
            f = 3;
        else
            f = 2;
        if (i < 2)
            g = 0;
        while (d < 2) {
            matrixx[i][d] = matrix[f][g];
            g++;
            d++;
        }
        d = 0;
    }
    j = 0;
    for (int i = 0; i < 4; i++) {
        while (j < 4) {
            printf("%lf ", matrixx[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
    }
    return 0;
}