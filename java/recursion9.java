public class recursion9{
    public static void binstring(int n,int lastplace, String str){
        if(n==0){
            System.out.println(str);
            return ;
        }
        binstring(n-1,0,str+"0");
        if(lastplace==0){
            binstring(n-1,1,str+"1");
        }
    }
    public static void main(String[] args) {
        binstring(5,0,"");
    }
}