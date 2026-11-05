import java.util.*;

public class example11 {
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        System.out.println("enter the number :");
        int n = sc.nextInt();
        if (n==2){
            System.out.println("this number is prime : "+ n);

        }
        else{
            boolean isPrime = true;
            for (int i=2;i<=Math.sqrt(n);i++){
                if (n%i==0)
                isPrime = false;
            }
            if (isPrime ==true){
                System.out.println("number  is prime :"+ n);

            }
            else{
                System.out.println("number is not prime" + n);
            }

        }

    }
    
}
