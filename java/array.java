import java.util.*;
public class array {
//     public static int linearsearch(String menu[],String key) {
//         for (int i=0;i<menu.length;i++){
//         if (menu[i].equals(key)){
//             return i;
//         }}
    
//     return -1;  
//     } 

//     public static void main(String[] args) {
//        // int marks[]= {2,4,5,6,10,12,13,22};
//         String menu[]={"samosa","bread","coffe","aamlet","pizza"};
//         String key ="bread";
//         int index = linearsearch(menu, key);
//          if (index == -1) {
//             System.out.println("not found");
//          }else
//          System.out.println("key is at index:- " +index);
//     }
    
// }
// public static int getlargest(int number[]) {
//     int largest= Integer.MIN_VALUE;
//     int smallest=Integer.MAX_VALUE;
//     for(int i=0;i<number.length;i++){
//         if(largest<number[i]){
//             largest=number[i];
//         }
//         if(smallest>number[i]){
//             smallest = number[i];
//         }
        
//     }
//     System.out.println("smallest number :- "+smallest);

//     return largest;
// }
    

// public static void main(String[] args)   {
//     int number[]={2,6,5,8,7,5,0};
//     System.out.println("largest number :- " + getlargest(number));
//     //System.out.println("smallest number :- "+getlargest(number));
// }
// }
public static void main(String args []){
    int arr[]={4,2,6,7,1};
    Arrays.sort(arr);
     System.out.print(arr);
}
}
