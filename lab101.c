#include <stdio.h>

int main()
 {
 int rows , cols , sum=0 , i , j ;
 printf("Enter  rows and coloumns");
 scanf("%d%d",&rows,&cols);
 int a[rows][cols];
 printf("Enter the elements of the matrix");
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   scanf("%d" , &a[i][j]);
   }
  }
  
  //for sum calculations
  for (i=0;i<rows;i++)
  {
   for (j=0;j<cols;j++)
    {
     sum+=a[i][j];
     }
  }
 printf("Sum of the elements: %d",sum);
 return 0;
 }
