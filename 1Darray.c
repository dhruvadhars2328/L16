#include<stdio.h>
int main(void)
{
    int x,i;
    printf("Enter the lenght of the array :-");
    scanf("%d",&x);
    int a[x],b[x],c[x];
    printf("Enter the array a :");
    for(i=0;i<x;i++)
    { 
        scanf("%d",&a[i]);
    }
    printf ("Enter the array b :");
    for(i=0;i<x;i++)
    {
        scanf("%d",&b[i]);
        
    }
    for(i=0;i<x;i++)
    {
        printf("The mul of array c[%d]=%d\n",i,c[i]);
    }
}
