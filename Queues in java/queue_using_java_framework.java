
import java.util.*;

public class queue_using_java_framework {
    public static void main(String args[]){

        Queue<Integer> q = new LinkedList<>();
        q.add(1);
        q.add(2);
        q.add(3);

        // q.clear();

        System.out.println("Peek of Queue : "+ q.peek());

        while(!q.isEmpty()){
            System.out.println(q.remove());
        }
    }
}
