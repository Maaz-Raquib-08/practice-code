# include<iostream>
using namespace std;
int main(){
    int arr[]={7,5,65,56,45,3444,76,7,8,9,};
    int n= sizeof(arr)/sizeof(arr[0]);
    int maax =arr[0];
    for (int i=1;i<n;i++){
        maax= max (maax,arr[i]);
    }
    cout<<maax;
}