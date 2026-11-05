#include<iostream>
using namespace std;
int arry[5]={12 , 4 , 6 , 45 , 24},temp,n=5;
void bobblesort(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
             if(arry[j]>arry[j+1]){
                swap(arry[j+1],arry[j]);
            }
        }
    }
}
void print()
{
    for(int i=0;i<n;i++)
    cout<<arry[i]<<endl;
}
int main(){
    cout<<" input element"<<endl;
    print();
    cout<<" after bobblesort"<<endl;
    bobblesort();
    print(); 
}