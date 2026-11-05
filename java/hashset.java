import java.util.HashSet;
// import java.util.Iterator;

public class hashset {
    public static void main(String[] args) {
        HashSet<String> hs=new HashSet<>();
        hs.add("delhi");
        hs.add("patna");
        hs.add("noida");
        hs.add("hyderabad");
        hs.add("mumbai");
        
        // Iterator it= hs.iterator();
        // while(it.hasNext()){
        //     System.out.println(it.next());
        // }
        for(String city:hs){
            System.out.println(city);
        }
    }
}
