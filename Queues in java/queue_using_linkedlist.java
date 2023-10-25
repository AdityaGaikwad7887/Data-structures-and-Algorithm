


public class queue_using_linkedlist {
    public static void main(String args[]){
        queue_q q = new queue_q();
        q.Add(1);
        q.Add(2);
        q.Add(3);

        while (!q.isEmpty()) {
            System.out.println(q.remove());
        }
        System.out.println(q.remove());
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

class queue_q{
    public static node head;
    public static node tail;

    public boolean isEmpty(){
        return head==null && tail==null;
    }

    public void Add(int data){
        node n = new node(data);
        if (isEmpty()) {
            head = tail = n;
            return;
        }

        tail.next = n;
        tail = n;

        return ;
    }

    public int remove(){
        if (isEmpty()) {
            System.out.println("queue is empty");
            return -1;
        }
        
        
        int temp = head.data;

        if (tail == head) {
            tail = head = null;
        }else{
            head = head.next;
        }

        return temp;
    }

    public int peek(){
        if (isEmpty()) {
            System.out.println("queue is empty");
            return -1;
        }

        return head.data;
    }
}
