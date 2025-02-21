#include<stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2], i, j, k, sum = 0;

    // Input matrix a
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input matrix b
    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum = 0;
            for (k = 0; k < 2; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    // Output the resulting matrix
    printf("The product of the matrices is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

