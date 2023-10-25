

    // ****** Push at the bottom of the stack ****** // 

import java.util.*;

public class Question1 {

    public static void PushBottom(Stack<Integer> s , int data ){

        if (s.empty()) {
            s.push(data);
            return ;
        }

        Integer tem_t = s.pop();
        PushBottom(s, data);

        s.push(tem_t);
    }

    public static void main(String args[]){
        Stack<Integer> s = new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        
        PushBottom(s, 9);

        while(!s.isEmpty()){
            System.out.println(s.peek());
            s.pop();
        }

        System.out.println("ok\n");

    }
}
