import java.util.*;
public class example12 {
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        int totalcoulam;
        int totalrow;
        System.out.println("enter the total row :");
        totalrow =sc.nextInt();
        System.out.println("enter the total coulam :");
        totalcoulam = sc.nextInt();
        for (int i=1;i<=totalrow;i++){
            for(int j=1;j<=totalcoulam;j++){
                if (i==1 || i==totalrow || j==1 || j==totalcoulam){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println( );
        }

    }
    
}
