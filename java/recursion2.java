public class recursion2 {
    public static int fic(int n){
        if(n==1||n==0){
            return 1;
        }
        int fict = n*fic(n-1);
        return fict;
    }
    public static void main(String[] args) {
        int n=5;
        int ans = fic(n);
        System.out.println(ans);
    }
}
