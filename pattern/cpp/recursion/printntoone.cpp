#include<iostream>
using namespace std;
void oneton(int n){
    if(n==0) return;
    cout<<n<<endl;
    oneton(n-1);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    oneton(n);

}