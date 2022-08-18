#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,s=0;
    int a[3][3];
    int c[3][3];
    printf("Enter first array elements");
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
        c[j][i]=a[i][j];
       } 
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
        printf("%d ",c[i][j]);
       }  
       printf("\n");
    }
    return 0;
}