
/// time complexity of these three numbers is n^3

public class max_sum_of_subarray {
    // public static int subarrays(int nums[]) {
    //     int sum = 0 ;
    //     int maxSum = Integer.MIN_VALUE;
    //     for (int i = 0; i < nums.length; i++) {
    //         for (int j = i; j < nums.length; j++) {
    //             sum = 0;
    //             for (int k = i; k <= j; k++) {
    //                 sum += nums[k];
    //             }
    //             if (sum > maxSum){
    //                 maxSum = sum;
    //             }
    //         }
    //     }
    //     return maxSum;
    // }

    public static int maxSubarraySum(int numbers[]){
        int currSum = 0;
        int maxsum = Integer.MIN_VALUE;
        int prefix[] = new int[numbers.length];
        prefix[0] = numbers[0]; 
        for (int i=1 ; i<numbers.length ; i++ ){
            prefix[i] = prefix[i-1] + numbers[i];
        } 

        for (int i = 0 ; i < numbers.length ; i++){
            for (int j = 1 ; j<numbers.length ; j++){
                currSum = i == 0 ? prefix[j] :  prefix[j] - prefix[i-1];
                if(currSum > maxsum){
                    maxsum = currSum;
                }
            }
        }
        return maxsum;
    }


    public static void main(String agrs[]) {
        int nums[] = { 2,4,6,8,10 };
        // subarrays(nums);
        // System.out.println("Maximum sum of subarray : "+subarrays(nums));
        System.out.println("Maximum sum of subarray : "+ maxSubarraySum(nums));
        System.out.println();
    }
}
