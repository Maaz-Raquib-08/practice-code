#include<iostream>
using namespace std;
int add(int a=2,int b=4,int c=5)
{
    return(a+b+c);
}
int main(){
    cout<<add()<<endl;
    cout<<add(5,8, 6)<<endl;
    cout<<add(43,5)<<endl;
    cout<<add(45)<<endl;
}