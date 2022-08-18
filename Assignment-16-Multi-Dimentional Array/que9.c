#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    int a[3][3],zero=0,nzero=0;
    printf("Enter first array elements\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       scanf("%d",&a[i][j]);
       } 
    }

   for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
        if(a[i][j]==0)
        zero++;
        else
        nzero++;
       } 
    }

    if(zero>nzero)
    printf("Given matrix is sparse matrix ");
    else
    printf("Given matrix is not sparse matrix ");
    return 0;
}
