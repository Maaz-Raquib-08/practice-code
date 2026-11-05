# include<iostream>
using namespace std;
int main(){
    int arr[]={7,5,65,56,45,3444,76777,7,8,9,};
    int n= sizeof(arr)/sizeof(arr[0]);
    int maax =arr[0];
    int smax=arr[0];
    for (int i=1;i<n;i++){
        maax= max (maax,arr[i]);
    }
    for(int i=0;i<n;i++){
        if(smax<arr[i]&&arr[i]!=maax)
        smax=arr[i];
    }

    cout<<maax<<"  "<<smax;
} 