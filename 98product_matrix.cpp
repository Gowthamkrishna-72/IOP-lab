#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int m, n, p, q;
    int i, j, k;

    // 
    printf("Enter rows (m) and columns (n) of Matrix A: ");
    scanf("%d %d", &m, &n);

    // 
    printf("Enter rows (p) and columns (q) of Matrix B: ");
    scanf("%d %d", &p, &q);

    // Check multiplication condition
    if (n != p) {
        printf("Matrix multiplication NOT possible!\n");
        return 0;
    }

    // Dynamic memory allocation for matrices
    int **A = (int **)malloc(m * sizeof(int *));
    int **B = (int **)malloc(p * sizeof(int *));
    int **C = (int **)malloc(m * sizeof(int *));

    for (i = 0; i < m; i++)
        A[i] = (int *)malloc(n * sizeof(int));

    for (i = 0; i < p; i++)
        B[i] = (int *)malloc(q * sizeof(int));

    for (i = 0; i < m; i++)
        C[i] = (int *)malloc(q * sizeof(int));

    // 
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", (*(A + i) + j));

    // 
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", (*(B + i) + j));

    // Matrix Multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            *(*(C + i) + j) = 0;
            for (k = 0; k < n; k++) {
                *(*(C + i) + j) += (*(*(A + i) + k)) * (*(*(B + k) + j));
            }
        }
    }

    // 
    printf("\nProduct Matrix C:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", *(*(C + i) + j));
        printf("\n");
    }

    // Free memory
    for (i = 0; i < m; i++)
        free(A[i]);
    for (i = 0; i < p; i++)
        free(B[i]);
    for (i = 0; i < m; i++)
        free(C[i]);

    free(A);
    free(B);
    free(C);

    return 0;
}
