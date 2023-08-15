import java.util.*;

public class largest_element {

    public static int smallest (int array[]){
        int ans = Integer.MAX_VALUE;
        for (int i = 0 ; i < array.length ; i++ ){
            if ( ans > array[i]){
                ans = array[i];
            }
        }
        return ans;
    }

    public static int largest (int array[]){
        int ans = Integer.MIN_VALUE ;
        for (int i = 0 ; i < array.length ; i++){
            if (ans <= array[i]){
                ans = array[i];
            }
        }
        return ans;
    }

    public static void main(String agrs[]){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int array[] = new int[size];
        for (int i = 0 ; i <size ; i++ ){
            int ele = sc.nextInt();
            array[i] = ele ; 
        }
        System.out.println("Smallest element is : " + smallest(array));
        System.out.println("Largest element is : " + largest(array));
        sc.close();
        
    }
}


// Note
/*
 * If size of array 4 and we input 2 elements only then other 
 * 2 element is by default zero 
 */
