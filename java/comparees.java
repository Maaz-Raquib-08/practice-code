public class comparees {
    public static  void main(String[] args){
        // String str ="maaz raquib";
        // String newStr="";
        // for(int i=0;i<str.length();i++){
        //     Integer count=1;
        //     while (i<str.length()-1 && str.charAt(i)==str.charAt(i+1)){
        //     count ++;
        //     i++;
        // }
        // newStr+=str.charAt(i);
        // if(count>1){
        //     newStr+=count.toString();
        // }}
        // System.out.println(newStr);
        String str = "maaz raquib";
        StringBuilder newStr = new StringBuilder();

        for (int i = 0; i < str.length(); ) {
            int count = 1;
            while (i < str.length() - 1 && str.charAt(i) == str.charAt(i + 1)) {
                count++;
                i++;
            }

            newStr.append(str.charAt(i));
            if (count > 1) {
                newStr.append(count);
            }

            i++;
        }

        System.out.println(newStr.toString());
    }
}

    
    

 