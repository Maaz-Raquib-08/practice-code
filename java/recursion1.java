public class recursion1 {
    public static void sumnumber(int i,int n ,int sum ){
        if(i==n){
            sum+=i;
            System.out.println(sum);
            return ;
        }
        sum+=i;
        sumnumber(i+1,n,sum);

    }       
    public static void main(String[] args) {
        sumnumber(1,5,0);
    }
    
}
