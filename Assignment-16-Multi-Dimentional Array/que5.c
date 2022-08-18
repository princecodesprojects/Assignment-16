#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,s=0;
    int a[3][3];
    int c[3][3];
    printf("Enter first array elements\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       scanf("%d",&a[i][j]);
       } 
    }

int n=2;
    for(i=0;i<3;i++)
    {
       
        s=s+a[i][i];
        
       
    }
    
        printf("sum is %d ",s);
    return 0;
}
