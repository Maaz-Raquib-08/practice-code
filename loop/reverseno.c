#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int r = 0;
    int sum =0;
    
    //int lastdigits = 0;
    //int oddno = 0;
    while (n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;

      sum= r+sum;
    }
   //sum=r+r;
    printf("the reverse no is %d",sum);
return 0;
}




