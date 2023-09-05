import java.util.*;

public class compression {
    public static StringBuilder strcompressed(String str){
        int count = 1;
        StringBuilder str2 = new StringBuilder(str);
        StringBuilder str3 = new StringBuilder();
        for (int i = 0 ; i < str2.length() ; i++){
            if ( i < str2.length()-1 && ((str2.charAt(i) == str2.charAt(i+1))) ){
                count++;
            }else{
                str3.append(str2.charAt(i));
                str3.append(count);
                count = 1;
            }
        }

        return str3;

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(strcompressed(str));
        sc.close();
    }
}
