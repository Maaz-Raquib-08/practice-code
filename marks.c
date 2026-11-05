#include<stdio.h>
int main()
{
    int a;
    printf("enter the percentage");
    scanf(" %d",&a);
    if(a>90)
    printf("a grade \n");
    else if (a>60)
    printf (" b grade \n");
    else if (a>40)
    printf("c grade \n");
    else
    printf("fail \n");
    return 0;
}