

public class circular_queue_array {
    public static void main(String args[]){
        queue q = new queue(3);
        q.Add(1);
        q.Add(2);
        q.Add(3);
        System.out.println(q.remove());
        q.Add(4);
        System.out.println(q.remove());
        q.Add(5);

        for (int i = 0; i < 3; i++) {
            System.out.println(q.remove());
        }
    }
}

class queue{
    static int arr[];
    int size;
    int rear;
    int front;

    public queue(int size){
        this.size = size;
        arr = new int[this.size];
        rear = -1;
        front = -1;
    }

    public boolean isEmpty(){
        return rear== -1 && front == -1;
    }

    public boolean isFull(){
        return (rear+1)%size == front;
    }

    public void Add(int data){
        if (isFull()) {
            System.out.println("queue is full");
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear+1)%size;
        arr[rear] = data;
        return;
    }

    public int remove(){
        if (isEmpty()) {
            System.out.println("queue is empty");
            return -1;
        }
    
        int result = arr[front];
        
        if(rear == front){
            rear = front = -1;
        }else{
            front = (front+1)%size;
        }

        return result;
    }

    public int peek(){
        if (isEmpty()) {
            System.out.println("queue is empty");
            return -1;
        }
        return arr[front];
    }
}