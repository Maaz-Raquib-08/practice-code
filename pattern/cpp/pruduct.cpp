#include<iostream>
using namespace std;
int main ()
{
    int x, ld ;
    cout<<"enter the number : "<<endl;
    cin>>x;
    int product = 1;
    while(x!=0){
    ld =x%10;
    x/=10;
    product *= ld ;}
    cout<<product;
    return 0;




}