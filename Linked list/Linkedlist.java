
public class Linkedlist {
    public class node {
        public int data;
        public node next;

        public node(int val ){
            this.data = val ;
            this.next = null ;
        }
    }
    public static node head;
    public static node tail;
    public static int size;

    public void add_to_list(int val){
        node n1 = new node(val);
        size++;
        if(head == null || tail == null ){
            head = tail =  n1;
            return ;
        }
        tail.next = n1;
        tail = tail.next;
    }

    //Finding the middle node the list
    public node midnode(){
        node slow = head;
        node fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    
    // Checking the palindrom 
    public void check_palindrom(){
        // base case
        if ( head == null || head.next == null ) {
            System.out.println("palindrom");
            return;
        }

        // Finding the mid and reverseing the list from the mid 
        node prv = null;
        node curr = midnode();
        node next ;
        while (curr != null) {
            next = curr.next;
            curr.next = prv;
            prv = curr;
            curr = next;
        }

        //compairing the two list 
        node right = prv;
        node left = head;
        while (right != null) {
            if (right.data != left.data) {
                System.out.println("nOt");
                return ;
            }
            right = right.next;
            left = left.next;
        }
        System.out.println("YeS");
        return ;
    }

    public void displays(){
        node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }    
    }
    public static void main(String args[]){
        Linkedlist l1 = new Linkedlist();
        l1.add_to_list(1);
        l1.add_to_list(2);
        l1.add_to_list(2);
        l1.add_to_list(1);
        // l1.displays();
        l1.check_palindrom();
    }
}