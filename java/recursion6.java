public class recursion6 {
    public static int fnum(int arr[],int n,int i) {
        if(i==arr.length){
            return -1;
        }
        if(n==arr[i]){
            return i;
        }
        return fnum(arr,n,i+1);
    }
    public static void main(String[] args) {
        int arr[]={2,3,4,5,6,7,8,9,11,10};
        int n=11;
       System.out.println(fnum(arr,n,0));
    }
}
