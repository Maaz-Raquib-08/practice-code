import java.util.HashMap;
import java.util.Set;
public class hashmap{
    public static void main(String[] args) {
        HashMap<String, Integer> hm=new HashMap<>();
        hm.put("india",100);
        hm.put("chaina",150);
        hm.put("nepal",20);
        hm.put("us",50);

        Set<String> keys=hm.keySet();
        System.out.println(keys);

        for(String k:keys){
            System.out.println("key="+k+",value="+hm.get(k));
        }

    }
}