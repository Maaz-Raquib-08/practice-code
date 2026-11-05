# include<iostream>
using namespace std;
int main(){
    int arr[]={7,-5,65,56,45,3444,76,7,8,9,};
    int n= sizeof(arr)/sizeof(arr[0]);
    int miin =arr[0];
    int smiin=arr[0];
    for (int i=1;i<n;i++){
        miin= min(miin,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(smiin<arr[0]&& miin<arr[0])
        smiin=arr[i];
    }
    cout<<miin<<" "<<smiin;
} 