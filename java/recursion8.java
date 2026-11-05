public class recursion8{
    public static int  ways(int n) {
        if(n==1||n==2){
            return n;
        }
        return ways(n-1)+(n-1)*ways(n-2);
    }
    public static void main(String[] args) {
        int n=2;
       System.out.println(ways(n));
    }
}