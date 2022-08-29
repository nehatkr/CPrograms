#include <stdio.h>

struct matrix
{
    int val[3][3];
};

struct matrix scanMatrix()
{
    struct matrix newMatrix;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &newMatrix.val[i][j]);
        }
    }
    return newMatrix;
}

void printMatrix(struct matrix matrix)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", matrix.val[i][j]);
        }
        printf("\n");
    }
}

struct matrix sumMatrix(struct matrix firstmatrix, struct matrix secondmatrix)
{
    struct matrix sumMatrix;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumMatrix.val[i][j] = firstmatrix.val[i][j] + secondmatrix.val[i][j];
        }
    }
        return sumMatrix;
}

int main()
{

    struct matrix first, second, sum;
    printf("Enter first element of a matrix\n ");

    first = scanMatrix();

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &first[i][j]);
    //     }
    // }
    printf("Enter second element of a matrix\n");

    second = scanMatrix();

    printf("First matrix:-\n");
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("\t%d", first[i][j]);
    //     }
    //     printf("\n");
    // }
    printMatrix(first);

    printf("\n");

    printf("second matrix:-\n");
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("\t%d", second[i][j]);
    //     }
    //     printf("\n");
    // }
    printMatrix(second);

    printf("Sum of entered matrix:-\n");
    sum = sumMatrix(first, second);
    printMatrix(sum);

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum.val[i][j] = first.val[i][j] + second.val[i][j];
    //         printf("\t%d", sum.val[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}