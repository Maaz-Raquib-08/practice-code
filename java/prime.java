import java.util.*;
public class prime {
    // public static void range(int n){
    //     for(int i=2;i<=n;i++){
    //         if(isprime(i))
    //         System.out.print(i+" ");
    //     } 
    //     System.out.println();
    //}
    public static boolean isprime(int n){
        for (int i=2 ;i<=n-1;i++){
            if (n%i==0){
                return false;
            }
        }return true;
    }
    public static void range(int n){
        for(int i=2;i<=n;i++){
            if(isprime(i))
            System.out.print(i+" ");
        } 
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        range(n);
        
    }
    
}
