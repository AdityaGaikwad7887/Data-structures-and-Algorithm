
public class Reverse_Stack {
    public static void reverse_statck(sstack s){
        if (s.isEmpty()) {
            return;
        }
    
        int top = s.pop();
        reverse_statck(s);
        push_bottom(s, top);
    }

    public static void push_bottom(sstack s , int data ){
        if (s.isEmpty()) {
            s.push(data);
            return;
        }

        int top = s.pop();
        push_bottom(s, data);
        s.push(top);
    }

    public static void print_stack(sstack s){
        while (!s.isEmpty()) {
            System.out.println(s.pop());
        }
    }

    public static void main(String args[]){
        sstack s = new sstack();

        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        reverse_statck(s);
        print_stack(s);
    }
}


class Node {
    int data ;
    Node next;
    public Node(int data){
        this.data = data ;
        this.next = null;
    }
}

class sstack{
    public static Node head = null;

    static boolean isEmpty(){
        return head == null;
    }

    static void push(int data){
        Node n = new Node(data);

        n.next = head ;
        head = n ;
    }

    static int pop(){
        int top = head.data;
        head = head.next;
        return top;
    }

    static int peek(){
        int top = head.data;
        return top;
    }

}
