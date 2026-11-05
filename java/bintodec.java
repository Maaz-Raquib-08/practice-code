import java.util.*;
public class bintodec {
    public static void bin(int n){
    int number=n;
    int dec=0;
    int pow=0;
    while(n>0){
        int lastnumber=n % 10;
        dec= dec +(lastnumber*(int)Math.pow(2 ,pow));
        pow++;
         n= n/10;


    }
    System.out.println("decimal of " + number +  " is "+ dec);
}
    public static void main(String[] args){
        bin(101);
}
    
}
