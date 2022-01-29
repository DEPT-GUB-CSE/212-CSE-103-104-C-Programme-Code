#include <stdio.h>
int main()
{
    int i, j, row, col;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter number of element of rows and columbs: ");
    scanf("%d%d", &row, &col);

    // A matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    // B matrix
    printf("Enter element of B matrix \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // print A

    printf(" A= ");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < col; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    // print B

    printf(" B= ");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < col; j++)
        {
            printf("%d", B[i][j]);
        }
        printf("\n");
    }

    // adding matrix

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }

    // print c
    printf(" A + B = ");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < col; j++)
        {
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}