import java.util.*;

public class Binary_search {
    public static void main(String agrs[]){
        Scanner sc = new Scanner(System.in);
        int nums[] = {1,2,3,4,5,6,7,8,9};
        int s = 0 , e = nums.length-1 , key ;
        int mid = s + (e-s)/2 ;
        System.out.print("Entre key : ");
        key = sc.nextInt();
        while (s<=e){
            if (nums[mid] == key ){
                System.out.println(mid);
            }
            if (nums[mid] < key ){
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        sc.close();
    }
}
