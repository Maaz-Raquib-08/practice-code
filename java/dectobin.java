import java.util.*;
public class dectobin {
    public static void dec(int n){
        int number=n;
        int lastnumber=0;
        int pow=0;
        while(n>0){
            int digit=n%2;
            lastnumber += digit *(int)Math.pow(10,pow);
            pow++;
            n=n/2;

        }
        System.out.println("dec numberis"+number+"bin is"+lastnumber);

    }
    

    public static void main(String[] args) {
        dec(2);
    }

    
}
