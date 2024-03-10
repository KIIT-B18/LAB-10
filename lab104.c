#include <stdio.h>
int main()
{
    int row, col, i, j, arr1[100][100], arr2[100][100];
    printf("Enter the row and column size of the matrix : ");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix of order %d x %d :\n",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the %d %d element of matrix : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr2[i][j]=arr1[j][i];
        }
    }

    printf("Original Matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of the given matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}