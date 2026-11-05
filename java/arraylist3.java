import java.util.ArrayList;

public class arraylist3 {
    public static void main(String[] args) {
     ArrayList<ArrayList<Integer>> mainlist =new ArrayList<>();  
      ArrayList<Integer> list= new ArrayList<>();  
      list.add(2);
      list.add(5);
      list.add(3);  
    mainlist.add(list);
     ArrayList<Integer>list2=new ArrayList<>();
     list2.add(9);
     list2.add(7);
     mainlist.add(list2);

        for(int i=0;i<mainlist.size();i++){
            ArrayList<Integer> maaz=mainlist.get(i);
            for(int j=0;j<maaz.size();j++){
                System.out.println(maaz.get(j)+" ");
            }
            System.out.println();
        }
          System.out.println(mainlist);
    }

}
