import java.util.*;

public class pairs_in_array {
    public static void pairs(int nums[]){
        for (int i = 0 ; i < nums.length-1 ; i++ ){
            for (int j = i+1 ; j < nums.length ; j++){
                System.out.print((nums[i]+" "+nums[j]) + "    ");
            }
            System.out.println();
        }
    }
    public static void main(String agrs[]){
        Scanner sc = new Scanner(System.in);

        int size = sc.nextInt();
        int nums[] = new int[size];
        for (int i = 0 ; i < size ; i++ ){
            nums[i] = sc.nextInt();
        }
        pairs(nums);
        sc.close();
    }
}

//// Note 
/*
 * Numbers of pairs = n(n-1)/2     -----(which is formula of Arithmatic Progration)
 */
