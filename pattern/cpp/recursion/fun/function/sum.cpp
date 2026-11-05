// #include<iostrem>
// using namespace std; /
#include<stdio.h>
int main(){
    // int my_var=10;
    // printf("%d",My_Var);
// int a=2;
// int b=4;
// a=b/a;
// b=a+b;
// a=a*b;
// printf("%d",a);
int* arr=(int*)malloc(3*sizeof(int));
arr[0]=1;
arr[1]=3;
arr[2]=2;
printf("%d",arr[arr[0]]);
}