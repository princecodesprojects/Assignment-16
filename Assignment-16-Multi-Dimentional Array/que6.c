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

int sfr=0,sfc=0;
   for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
        sfr=sfr+a[i][j];
        sfc=sfc+a[j][i];
       } 
    }
    
        printf("sum of row %d \n",sfr);
        printf("sum of colom %d \n",sfc);
    return 0;
}
