#include<stdio.h>
void main()
{
    int mark;
    printf (" enter your mark :");
    scanf("%d", & mark );
    if ( mark>=90){printf ("grade : O");}
    else if ( mark>=80){printf ("grade : A");} 
    else if ( mark>=70){ printf ("grade : B");}
    else if ( mark>=60){printf("grade : C");}
    else if ( mark>=50){printf ("grade : F");}
    else { printf (" you are restigated from the college ");}
}

