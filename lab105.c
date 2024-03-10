#include <stdio.h>
int main()
{
    int i, j, arr[100][100], sum=0, size;
    printf("Enter the row or column size of a square matrix : ");
    scanf("%d",&size);
    printf("Enter the elements of matrix :\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("Enter the %d x %d element of matrix : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            sum += arr[i][j];
        }
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j)
            sum += arr[i][j];
        }
    }

    printf("Matrix :\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Sum of elements of upper triangular matrix : %d",sum);
    return 0;
}