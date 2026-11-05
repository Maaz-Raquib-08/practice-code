public class recursion5 {
    public static boolean bhai(int arr[],int m) {
        if(m==arr.length-1){
            return true;
        }
        if(arr[m]>arr[m+1]){
            return false;
        }
        return bhai(arr,m+1);

        
    }
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5,6};
        System.out.println(bhai(arr,0));
    }
}
