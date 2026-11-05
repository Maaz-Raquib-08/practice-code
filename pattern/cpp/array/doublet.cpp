#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    vector<int>v(2);
    int arr[]={23,-23,45,-45,6,7,6,90,77,-7};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]+arr[j]==0){
               v[0]=i ;
               v[1] = j;
               cout<<v[0]<<' '<<v[1];
               cout<< " ";
            }
        }
    }  


}