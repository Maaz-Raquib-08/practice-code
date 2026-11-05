public class example15 {
    public static int power(int n,int a) {
        int k=1;
         while(n>0){
            if((n&1)!=0){
                k*=a;
            }
            a*=a;
            n=n>>1;

        }
        return k;
        
    }
    public static int countnumber(int n) {
        int k=0;
        while(n>0){
        if((n&1)!=0){
            k++;
        }
        n= n>>1;
        }
        return k;
    }
    public static int clearrange(int n,int i,int j) {
        int k=0;
          int a=((~0)<<(j+1));
        int b=(1<<i)-1;
        int bitmask =a|b;
        k=n&bitmask;
        return k;
        
    }
    public static void main(String[] args) {
        int a=0; 
        int n=0;
        int i=0, j=0;
       
        System.out.println(power(4,2));
        System.out.println(countnumber(6));
        System.out.println(clearrange(60,2,4));
      
        
        // System.out.println("number"+k);
        
       
        
    }
    
}
