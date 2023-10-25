public class Linked_list {
    
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
    public static int size;  // for counting the size of the linked list

    // adding element to end
    public void append_to_last(int val) {
        size++;
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
    }

    // Inserting new element 
    public void insert(int index, int val){
        size++;
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
        if (size == 0) {
            System.out.println("List is empty");
            System.out.println(Integer.MIN_VALUE);
            return ;
        }
        size--;
        if (index == 1) {
            head = head.next;
            return ;
        }
        node temp = head ;
        int i = 1;
        while (i+1 != index) {
            temp = temp.next;
            i++;
        }
        temp.next = (temp.next).next;
    }
    
    
    // print linkedlist 
    public void display(){
        node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    // Search linkedlist with value 
    public int search(int val){
        node temp = head;
        int index = 0 ;
        while (temp != null) {
            index++;
            if (temp.data == val) {
                return index;
            }
            temp = temp.next;
        }
        return -1;
    }


    public static void main(String args[]) {
        Linked_list l1 = new Linked_list();

        l1.append_to_last(1);
        l1.append_to_last(2);
        l1.append_to_last(3);
        l1.append_to_last(4);
        // l1.insert(3, 6);
        // l1.delete(1);
        l1.display();
        // System.out.println(l1.size);
        // System.out.println(l1.search(4));
       
    }
}