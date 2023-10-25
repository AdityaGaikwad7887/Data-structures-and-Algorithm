

public class queue_using_array {
    public static void main(String args[]){
        queue_q q = new queue_q(4);
        q.Add(1);
        q.Add(2);
        q.Add(3);
        q.Add(4);

        for (int i = 0; i < 4; i++) {
            System.out.println(q.remove());
        }
    }    
}

class queue_q{
    static int arr[];
    static int size;
    static int rear = -1;
    public queue_q(int size){
        this.size = size;
        arr = new int[size];
    }

    public boolean isEmpty(){
        return rear==-1;            
    }

    public void Add(int data){
        if (rear == size-1) {
            System.out.println("Queue is full");
            return;
        }

        rear = rear + 1; 
        arr[rear] = data;

        return;
    }

    public int remove(){
        if (isEmpty()) {
            System.out.println("All ready empty");
            return -1;
        }

        int front = arr[0];
        for (int i = 0; i < rear; i++) {
            arr[i] = arr[i+1];
        }
        rear--;

        return front;
    }

    public int peek(){
        if (isEmpty()) {
            System.out.println("All ready empty");
            return -1;
        }

        return arr[0];
    }

}
