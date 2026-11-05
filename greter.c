#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first no ");
    scanf(" %d",&a);
    printf("enter the second no");
    scanf("%d",&b);
    printf ("enter the thired no");
    scanf(" %d",&c);
    if (a>b){
        if (a>c)
        printf(" %d is greter",a);
        else
        printf ("%d is greter ",c);
    }
    else{
        if (b>c)
        printf ("%d is gretest",b);
        else
        printf("%d is gretest ",c);

    }
    return 0;
    }