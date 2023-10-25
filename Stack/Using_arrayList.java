import java.util.*;

public class Using_arrayList {
    public static void main(String args[]){
        our_stack s = new our_stack();
        s.push(1);
        s.push(2);
        s.push(3);
        while(!s.isEmpty()){
            System.out.println(s.peek());
            s.pop();
        }
    }
}

class our_stack{
    static ArrayList<Integer> list = new ArrayList<>();

    void push(int element){
        list.add(element);
    }

    int pop(){
        int top = list.get(list.size()-1);
        list.remove(list.size()-1);
        return top;
    }

    int peek (){
        int top = list.get(list.size()-1);
        return top;
    }

    boolean isEmpty(){
        return list.size() == 0;
    }
}