#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s=0 ;
    printf("the series runs upto:");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++)
    {
        s=s*10+1;
        printf("%d+",s);
    }
    printf("+.......");
    return 0;
}