
public class Subarrays {
    public static void subarrays(int nums[]){
        // int size = 0 ;
        for (int i = 0 ; i < nums.length - 1 ; i++ ){
            for (int j = i ; j < nums.length ; j++){
                for (int k = i ; k < j ; k++){
                    System.out.print(nums[k]);
                }
                System.out.print(" ");
            }
            System.out.println("   ");
        }
    }
    public static void main(String agrs[]){
        int nums[] = {1,2,3,4,5};
        subarrays(nums);
    }
}
