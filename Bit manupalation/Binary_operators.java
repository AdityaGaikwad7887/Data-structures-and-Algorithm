public class Binary_operators {
    public static void main(String args[]){
        //And & 
        System.out.println(5&6);
        // When we do and operation on 5 and 6 at binary level output is (1 0 0) which is 4 in decimal

        //Or | 
        System.out.println(5|6);
        // When we do or operation on 5 and 6 at binary level output is (1 1 1) which is 7 in decimal

        //xor ^
        System.out.println(5 ^ 6);
        // When we do xor opertion on 5 and 6 we get output (0 1 1)
        // we can differentiate thing using xor because when input are same then output is zero(0) and input and different then output is one(1)

        // One's compaliment (~) Not operators
        System.out.println( ~5);
        // input is 5 ( 0 0 0 0 0 1 0 1) its Not is -6 (1 1 1 1 1 0 1 0)

    }
}
