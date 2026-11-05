# include<iostream>
using namespace std;
int main(){
    int n;
    int sum=1;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum *=arr[i];

    }
    cout<<"sum of array  "<<sum;
}