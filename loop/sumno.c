#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int sum = 0;
    int lastdigits = 0;
    //int oddno = 0;
    while (n!=0){
        lastdigits =n%10;
           // if(lastdigits %2==0)
        
        sum = sum+lastdigits;
        n = n/10 ;
    }
    printf("the sum of digits is %d",sum);
return 0;
}
