//Matrix multiplication.
#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, sum=0, first[100][100], second[100][100], third[100][100];
    
    printf("Enter row and column size of matrix 1 : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter elements of matrix 1 :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("Enter %d %d element of matrix 1 : ",i+1,j+1);
            scanf("%d",&first[i][j]);
        }
    }
    
    printf("Enter row and column size of matrix 2 : ");
    scanf(" %d%d",&r2,&c2);
    printf("Enter elements of matrix 2 :\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("Enter %d %d element of matrix 2 : ",i+1,j+1);
            scanf("%d",&second[i][j]);
        }
    }
    
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                sum += (first[i][k] * second[k][j]);
            }
            third[i][j] = sum;
            sum=0;
        }
    }

    printf("\nMatrix 1 :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d  ",first[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 :\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d  ",second[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of Matrix 1 and Matrix 2 :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d  ",third[i][j]);
        }
        printf("\n");
    }

    return 0;
}