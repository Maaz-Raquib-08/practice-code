#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
      //  if(i%2==0){//only for even no 
      if (i%2!=0){//only for odd no
        continue;}
        printf("%d ",i);}
        return 0;
}