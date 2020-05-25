#include <stdio.h>
#define SIZE 10
int main() {

    int n, i, j;

    printf("N = ");
    scanf_s("%d", &n);

    if (n <= 0 || n > SIZE) {
        printf("N out of list size");
        return 0;
    }

    int a[SIZE];

    for (i = 0; i < n; i++) {
        printf("gimme %i element ",i+1);
        scanf_s("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%i ", a[i]);
    }
    return 0;
}