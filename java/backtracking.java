public class backtracking{
    public static void changearr(int arr[],int start,int end) {
        if(start==arr.length){
            prarr(arr);
            return;
        }
        arr[start]=end;
        changearr(arr,start+1,end+1);
        arr[start]=arr[start]-2;
        
    }
    public static void prarr(int arr[]) {
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int arr[]=new int[5];
        
        changearr(arr,0,1);
        prarr(arr);
    }
}