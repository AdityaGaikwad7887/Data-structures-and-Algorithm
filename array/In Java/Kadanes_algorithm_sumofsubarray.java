import java.util.*;

public class Kadanes_algorithm_sumofsubarray {
    public static int kadanes(int numbers[]) {
        int maxsum = Integer.MIN_VALUE;
        int currentsum = 0 , k = 0 ;
        for (int i= 0; i<numbers.length ; i++){
            if(numbers[i] >= 0){
                k = 1;
            }
            if(numbers[i] > maxsum){
                maxsum = numbers[i];
            }
        }
        if (k == 1) {
            maxsum = Integer.MIN_VALUE;
            currentsum = 0;
            for (int i = 0; i < numbers.length; i++) {
                currentsum = currentsum >= 0 ? currentsum + numbers[i] : 0;
                System.out.println(currentsum);
                if (maxsum < currentsum) {
                    maxsum = currentsum;
                }
            }
            return maxsum;
        }
        return maxsum;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int numbers[] = new int[size];
        for (int i = 0; i < size ; i++){
            numbers[i] = sc.nextInt();
        }
        System.out.println(kadanes(numbers));
        sc.close();

    }
}


//// Note
/*
 * kadanes methode/algorithm is one of the best way to slove subarray sum
 * time complecity in 2n only 
 */