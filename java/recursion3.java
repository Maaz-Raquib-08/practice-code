public class recursion3 {
    public static int pow(int x,int n) {
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        int pow1=pow(x,n-1);
        int pow2=x*pow1;
        return pow2;
        
    }
    public static void main(String[] args) {
        int x=2;
        int n=5;
        int ans=pow(x,n);
        System.out.println(ans);
    }
}
