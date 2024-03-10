#include <stdio.h>
int main()
{
    int row, col, i, j, arr1[100][100], arr2[100][100], arr3[100][100];
    printf("Enter the row and column size of the matrix 1: ");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix 1 of order %d x %d :\n",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the %d %d element of matrix 1 : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the row and column size of the matrix 2: ");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix 2 of order %d x %d :\n",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the %d %d element of matrix 2 : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Matrix 1 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("Sum of Matrix 1 and Matrix 2 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}