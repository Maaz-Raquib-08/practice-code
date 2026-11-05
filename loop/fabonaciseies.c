#include<stdio.h>
int main()
{
    int n;
    printf("entera number");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum= a+b;
        a=b;
        b= sum;
            printf("\nthis is a %d fibonacci serise : %d",i ,sum);
    } 
   // printf("this is a fibonacci serise : %d" ,sum);
    return 0;
}