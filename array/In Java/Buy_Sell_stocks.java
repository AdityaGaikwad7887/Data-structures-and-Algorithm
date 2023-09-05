
public class Buy_Sell_stocks {
    public static int profit(int prices[]) {

        int minprice = Integer.MAX_VALUE;
        int maxprice = 0 ;
        int k = 0;
        for (int i = 0; i < prices.length; i++) {
            if (minprice > prices[i]) {
                minprice = prices[i];
                k = i;
            }
        }
        for (int i = k + 1; i < prices.length; i++) {
            if (maxprice < prices[i]) {
                maxprice = prices[i];
            }
        }
        if (maxprice - minprice > 0) {
            return maxprice - minprice;
        }
        return 0;
    }

    public static void main(String args[]) {
        int prices[] = { 7, 1, 5, 3, 6, 4 };
        // int prices[] = { 7, 5,4,3,2,1};
        System.out.println("Profit : " + profit(prices));
    }
}


//   Above code has O(2n) time complexity