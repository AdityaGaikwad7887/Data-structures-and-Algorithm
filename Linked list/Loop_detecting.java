public class Loop_detecting {
    // creation of node 
    public static class node {
        int data;
        node next;
        public node(int val) {
            this.data = val;
            this.next = null;
        }
    }

    public static node head;

    //detecting the loop in the linkedlist
    public static void detect_loop(node head){
        node slow = head.next;
        node fast = head.next.next;
        int i = 0 ;
        while (fast != null && slow != null) {

            System.out.println(i);
            i++;
            if (fast == slow) {
                System.out.println("Loop detected ");
                return ;
            }
            slow = slow.next;
            fast = fast.next.next;
        }
        System.out.println("Loop not detected ");
    }

    public static void main(String args[]){
        head = new node(1);
        head.next = new node(2);
        head.next.next = new node(3);
        head.next.next.next = new node(3);
        head.next.next.next.next = new node(4);
        head.next.next.next.next.next = new node(4);
        head.next.next.next.next.next.next = new node(4);
        head.next.next.next.next.next.next.next = head.next;
        


        detect_loop(head);
    }
}