#include<iostream>
using namespace std;
void oneton(int x , int n){
    if(x>n) return;
    cout<<x<<endl;
    oneton(x+1,n);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    oneton(1,n);

}