#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    int a[3][3];
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
        if(i>j)
        printf("%d ",a[i][j]);
       } 
    }
    
    return 0;
}
