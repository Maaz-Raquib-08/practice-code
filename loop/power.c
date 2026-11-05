#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a base number");
    scanf("%d",&a);
     printf("enter a conponent number");
    scanf("%d",&b);
    int power=1;
    for (int i=1;i<=b;i++){
        power= power*a;
    }
    printf("this is squre a number %d",power);
    return 0;
}