
////// This is not working properly //////


public class removing_cycle {
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

    // detecting the loop in the linkedlist
    public static void detect_loop(node head) {
        node slow = head.next;
        node fast = head.next.next;
        while (fast != null && slow != null) {
            if (fast == slow) {
                System.out.println("Loop detected ");
                return;
            }
            slow = slow.next;
            fast = fast.next.next;
        }
        System.out.println("Loop not detected ");
    }

    // removeing the loop in linkedlist
    public static void remove_loop(node head){
        node slow = head.next;
        node fast = head.next.next;
        while (fast != null && slow != null) {
            if (fast == slow){
                break;
            }
            slow = slow.next;
            fast = fast.next.next;
        }
        slow =head;
        while (fast != null && slow != null){
            if (fast == slow) {
                System.out.println("Removed");
                break;
            }
            slow = slow.next;
            fast = fast.next;
        }
        
    }

    // display 
    public static void display(node head){
        node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public static void main(String args[]) {
        head = new node(1);
        head.next = new node(2);
        head.next.next = new node(3);
        head.next.next.next = new node(4);
        head.next.next.next = new node(5);
        head.next.next.next = new node(6);
        head.next.next.next.next = head.next.next;
        detect_loop(head);
        remove_loop(head);
        display(head);
    }
}
