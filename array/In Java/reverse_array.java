
public class reverse_array {
    public static void main(String agrs[]){
        int nums[] = {1,2,3,4,5,6,7,8,9};
        int s = 0 , e = nums.length-1;
        while (s <= e){
            int temp = nums[s] ;
            nums[s] = nums[e];
            nums[e] = temp ;
            s++;
            e--;
        }
        for (int i= 0 ; i < nums.length ; i++ ){
            System.out.print(nums[i] + " ");
        }
    }
}
