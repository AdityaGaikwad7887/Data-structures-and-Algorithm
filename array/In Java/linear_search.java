import java.util.*;

public class linear_search {

    public static int check_index(int nums[] , int key ){
        for (int i = 0 ; i < nums.length ; i++){
            if (nums[i] == key){
                return i;
            }
        }
        return -1;
    }
    
    public static void main(String agrs[]){
        int key;
        Scanner sc = new Scanner(System.in);

        int nums[] = {376,6,3,767,65,45,32,41};
        System.out.print("Enter key : ");
        key = sc.nextInt();
        
        int index = check_index(nums, key);

        if (index == -1){
            System.out.println("Key is not found");
        }else{
            System.out.println("Key is found at index : " + index);
        }
        sc.close();
    }
}


// Notes
/*
 * In linear search we checks element/things one by one 
 * 
 */
