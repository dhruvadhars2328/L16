#include<stdio.h>
void add(int x[], int size)
{
for(int i=0;i<size;i++)
{printf("a(%d)=%d\n",i,x[i]); }printf ("\n");
}
int main(void)
{
int a[5]={34,35,36,37};
int b[10]={1,2,3,4,5,6,7,8,9};
add(a,5);
add (b,10);
}
