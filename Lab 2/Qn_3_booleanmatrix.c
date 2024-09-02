//Implement a C program to perform Boolean matrix multiplication and addition on two given Boolean matrices.

#include <stdio.h>

void BooleanMatrixAddition(int matrix1[3][3], int matrix2[3][3])
{
    printf("\n Boolean Matrix Addition:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix1[i][j] || matrix2[i][j]);
        }
        printf("\n");
    }
}

void BooleanMatrixMultiplication(int matrix1[3][3], int matrix2[3][3])
{
    printf("\n Boolean Matrix Multiplication:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix1[i][j] && matrix2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[3][3] = {{1, 0, 1}, {0, 1, 0}, {1, 0, 1}};
    int matrix2[3][3] = {{0, 1, 0}, {1, 0, 1}, {0, 1, 0}};

    BooleanMatrixAddition(matrix1, matrix2);
    BooleanMatrixMultiplication(matrix1, matrix2);
}