public class Fast_Exponetiation {
    public static double fastpow(double x, long n) {
        double ans = 1;

        while (n > 0) {
            if ((n & 1) != 0) {
                ans = ans * x;
            }
            x = x * x;
            n = n >> 1;
        }
        return ans;

    }

    public static double myPow(double x, int n) {

        long v = n;

        if (n < 0) {
            v = -v;
        }
        return (n < 0) ? 1.0 / fastpow(x, v) : fastpow(x, v);

    }
}
