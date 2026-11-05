public class recursion7 {
    public static int  tiles(int n) {
        if(n==0||n==1){
            return 1;
        }

        return tiles (n-1)+tiles(n-2);
    }
    public static void main(String[] args) {
        int n=8;
        System.out.println(tiles(n));
    }
}
