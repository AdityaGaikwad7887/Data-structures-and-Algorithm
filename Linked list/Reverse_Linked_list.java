public class Reverse_Linked_list {
    // creation of node 
    public class node {
        int data;
        node next;
        public node(int val) {
            this.data = val;
            this.next = null;
        }
    }

    public static node head;
    public static node tail;

    // adding element to end
    public void append_to_last(int val) {
        node n = new node(val);
        if (head == null || tail == null) {
            head = tail = n;
            return;
        }
        node temp = head;
        while (temp.next!= null) {
              temp = temp.next;
        }
        temp.next = n;
        tail = temp.next;
    }

    // Inserting new element 
    public void insert(int index, int val){
        node n = new node(val);
        int i = 1;
        node temp = head;
        while (i+1 != index) {
            temp = temp.next;
            i++;
        }
        n.next = temp.next;
        temp.next = n;
    }

    // Deleting the index / node
    public void delete(int index){
        node temp = head ;
        int i = 1;
        while (i+1 != index) {
            temp = temp.next;
            i++;
        }
        temp.next = (temp.next).next;
    }

    // Reverse the Linked list 
    public void reverseing (){
        node curr = head;
        node prev = null;
        node forw ;
        while (curr != null) {
            forw = curr.next;
            curr.next = prev;
            prev = curr;
            curr = forw;
        }
        head = prev;
    }
    // print linkedlist 
    public void display(){
        node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    public static void main(String args[]) {
        Reverse_Linked_list l1 = new Reverse_Linked_list();

        l1.append_to_last(1);
        l1.append_to_last(2);
        l1.append_to_last(3);
        l1.append_to_last(4);
        l1.reverseing();
        l1.display();
    }
}
