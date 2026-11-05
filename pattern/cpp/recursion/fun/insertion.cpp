#include<iostream>
using namespace std;
int a[5]={9,4,25,45,7},temp,n=5,j;
void insertionsort(){
for(int i=1;i<n;i++){
    temp=a[i];
     j=i-1;
    while(j>=0 && temp<a[j])
    {
        a[j+1]=a[j];
        j--;}
        a[j+1]=temp;
    
}
}
void print(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    cout<<" before insertion"<<endl;
    print();
        //insertionsort();
    cout<<"after insertion"<<endl;
     insertionsort();
    print();
}