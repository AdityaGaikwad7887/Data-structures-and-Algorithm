import java.util.*;


public class NextGreater {
    
    public static void main(String args[]){
        int arr[] = {1,8,5,0,6,7,4};
        int Ngreater[] = new int[arr.length];
        Stack<Integer> st = new Stack<>();

        for(int i = arr.length-1 ; i >= 0; i--){
            //while loop
            while(!st.isEmpty() && arr[st.peek()] <= arr[i]){
                st.pop();
            }

            // if-else
            if(st.isEmpty()){
                Ngreater[i] = -1;
            }else{
                Ngreater[i] = arr[st.peek()];
            }

            // push in st
           st.push(i);
        }

        for(int i = 0; i < Ngreater.length ; i++){
            System.out.print(Ngreater[i] + " ");
        }

    }
}
