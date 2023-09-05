import java.util.*;

public class Even_Odd_numbers {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int bitmask = 1;
        if ( (a & bitmask )== 0){
           System.out.println("Even Number");
        }else{
           System.out.println("Odd Number");
        }
        
        sc.close();
    }
    
}
