import java.util.*;

public class count_of_set_bit {
    private static int setBits(int n) {
        int ans = 0;
        while ( n > 0) {
            if ((n & 1) == 1)
                ans++;
            n = n >> 1;
        }
        return ans;
    }

    public static void main(String agrs[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Total setBits is :" + setBits(n));
        sc.close();
    }
}
