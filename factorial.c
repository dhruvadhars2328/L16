#include<stdio.h>
int main()
{
    int N,F=1,i;
    printf("Enter the number:");
    scanf("%d",&N);
    for(i=1; i<=N; ++i)
    {
      F=F*i;
    }
    printf( "The factorial is :%d",F);
    return 0;
}
