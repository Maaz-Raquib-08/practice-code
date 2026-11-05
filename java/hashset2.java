import java.util.HashSet;

public class hashset2 {
    public static void main(String[] args) {
        int nums[]={1,3,2,5,7,6,4};
        int nums2[]={7,9,4,4};
        HashSet<Integer> set=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            set.add(nums[i]);
        }
        for(int i=0;i<nums2.length;i++){
            set.add(nums2[i]);
        }

        System.out.println(" union =" + set.size());

        set.clear();
        for(int i=0;i<nums.length;i++){
            set.add(nums[i]);
        }
        int count=0;
        for(int i=0;i<nums2.length;i++){
            if(set.contains(nums2[i])){
                count++;
                set.remove(nums2[i]);
            } 
        }
        System.out.println("intersection ="+ count);
    }
}
