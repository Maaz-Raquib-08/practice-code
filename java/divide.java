public class divide{
    public static void printarr(char arr[]) {
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]+"");
        }
        System.out.println();
    }
    public static void mergesort(char arr[],int st, int ed) {
        if(st>=ed){
            return;
        }
            int mid=(st+ed)/2;
            mergesort(arr,st,mid);
            mergesort(arr,mid+1,ed);
            merge(arr,st,mid,ed);
    }
    public static void merge(char arr[],int st,int mid,int ed){
        int temp[]=new int[ed-st+1];
           int i=st;
           int j=mid+1;
           int k=0;

           while(i<=mid && j<=ed){
            if(arr[i]<arr[j]){
                temp[k]=arr[i];
                i++;
            }
            else{
                temp[k]=arr[j];
                j++;
            }
            k++;
           }
           while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=ed){
            temp[k++]=arr[j++];
        }
            for(k=0,i=st;k<temp.length;k++,i++){
                arr[i]=temp[k];
            }
    }
    public static void main(String[] args) {
        s arr[]={"sun","mars","earth","mercury"};
        mergesort(arr,0,arr.length-1);  
        printarr(arr);
    }
}