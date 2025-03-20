#include<stdio.h>
void add(int x[])
{
for(int i=0;i<5;i++)
printf("a(%d)=%d\n",i,x[i]);
}
int main(void)
{
int a[5]={34,35,36,37};
add (a);
}
