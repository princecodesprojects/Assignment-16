#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,prev=0,preR=0;
    int a[4][4];
    printf("Enter  array elements\n");
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
       {
       scanf("%d",&a[i][j]);
       } 
    }

   for(i=0;i<4;i++)
    {
        int current=0,currR=0;
       for(j=0;j<4;j++)
       {
        if(a[i][j]==1)
        current++;
       } 
       if(current>prev)
       {
        prev=current;
        currR=i;
        preR=currR;
       }
    }


    printf("Row with maximum number of 1s is %d",preR+1);
   
    return 0;
}
