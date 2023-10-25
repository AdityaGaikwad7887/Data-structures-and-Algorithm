public class Using_linkedList {
    public static void main(String args[]){
        Our_satck s = new Our_satck();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);

        // for(int i = 0 ; i < 3 ; i++){
        //     System.out.println(s.peek());
        //     s.pop();
        // }
        while (!s.isEmpty()) {
            System.out.println(s.peek());
            s.pop();
        }
    }
}

class node{
    int data; 
    node next;
    
    public node(int data){
        this.data = data;
        this.next = null;
    }
}

class Our_satck{
    static node head = null;
    
    boolean isEmpty(){
        return head == null;
    }

    void push(int data){
        node n = new node(data);
        if (isEmpty()) {
            head = n;
            return;
        }

        n.next = head;
        head = n;
    }

    int pop(){
        int top = head.data;
        head = head.next;
        return top;
    }

    int peek(){
        return head.data;
    }

}