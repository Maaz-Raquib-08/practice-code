import java.util.*;
public class stack2 {
    public static void main(String[] args) {
    String str="abc";   
    Stack<Character> s = new Stack<>();
    int idx=0;
    while(idx<str.length()){
    s.push(str.charAt(idx));
    idx++;
    }
    StringBuilder result=new StringBuilder("");
    while(!s.isEmpty()){
        char curr=s.pop();
        result.append(curr);
    }
    String m =result.toString();
    System.out.println(m);

}
}
