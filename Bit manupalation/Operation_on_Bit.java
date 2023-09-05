public class Operation_on_Bit {
    public static int getIthbit(int n, int i){
        int bitMask = 1<<i;
        if((n & bitMask ) == 0){
          return 0;
        }else{
            return 1;
        }
    }

    public static int setIthbit(int n , int i ){
        int bitMask = 1<<i;
        return n | bitMask;
    }

    public static int clearIthbit(int n , int i ){
        int bitMask = ~(1<<i);
        return n & bitMask;
    }

    public static int updateIthbit(int n, int i, int newbit){
 
        // approch no.1 
        // if(newbit == 0){
        //     return clearIthbit(n, i);
        // }else{
        //     return setIthbit(n, i);
        // }

        // approch no.2
        n = clearIthbit(n, i);
        int bitMast = newbit<<i;
        return n | bitMast ;
    }

    public static int clearIbits(int n, int i){
        int bitMask = ~(0);
        return n & bitMask;
    }
    public static void main(String args[]){
        
        // getIthbit(n, i)  -- i is an index, where this function gives bit at index i in binary \
        // this is user define operation not in built
        // binary for 10 is 1 0 1 0    
        System.out.println(getIthbit(10, 1));
        // output should be 1  

        // setIthbit(n, i)  --  this fuction gives output when inserting 1 at that index
        // binary for 10 is 1 0 1 0 
        System.out.println(setIthbit(10, 2));
        // output should be 14 

        // clerIthbit(n, i)  -- this function gives output for I th bit convert into 0 
        System.out.println(clearIthbit(10, 1));
        // output should be 8

        // updateIthbit(n, i, newbit)  -- this function changes 0 to 1 and 1 to 0 
        System.out.println(updateIthbit(10, 3, 0));
    }
}
