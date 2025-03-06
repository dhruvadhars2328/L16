#include<stdio.h>
void add( char const*name ,int x[], int size)
{int sum=0;
for(int i=0;i<size;i++)
{printf("%s(%d)=%d\n",name,i,x[i]);sum+=x[i]; }printf ("The sum of elements:%d\n",sum);}
int main(void)
{
int a[5]={34,35,36,37};
int b[10]={1,2,3,4,5,6,7,8,9};
add("First array",a,5);
add("Second array",b,10);
}
