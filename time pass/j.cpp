#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int left = start ,right = mid+1,index = 0;
    int temp[end-start+1];
    while(left<=mid&& right<=end)
    {
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }
    // left array is not empty yet 
    while(left<=mid)
    {
        temp[index] = arr[left];
        index++,left++;
    }
    while(right<=end)
    {
        temp[index] = arr[right];
        index++,right++;
    }
    index = 0;
    // put these value in array 
    while(start<=end){
        arr[start] = temp[index];
        start++,index++;
    }

}
void mergesort(int arr[],int start,int end)
{
    if(start==end)
    {
        return ;
    }
    int mid = (start+end)/2;
    // left side 
    mergesort(arr,start,mid);
    // right side
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);

}
int main()
{
   
    
    int size;
    cout<<"enter array size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter array of element "<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element are "<<endl;
    for(int i = 0; i<size; i++)
    { 
        cout<<arr[i]<<" ";
    }
    cout<<"\n*"<<endl;
    mergesort(arr,0,size-1);
    cout<<"sorted array : "<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}