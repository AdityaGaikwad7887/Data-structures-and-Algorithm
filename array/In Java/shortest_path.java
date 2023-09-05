import java.util.*;
public class shortest_path {
    public static float shortestPath(String dir){
        int x = 0 , y = 0 ;
        for (int i = 0 ; i < dir.length() ; i++){
            // North 
            if (dir.charAt(i) == 'N')
               y++;
            
            // South
            else if (dir.charAt(i) == 'S')
                y--;
            
            // East
            else if (dir.charAt(i) == 'E')
                x++;
            
            // Wast
                else if (dir.charAt(i) == 'W')
                x--;
        }
        int X2 = x*x;
        int Y2 = y*y;

        return (float)(Math.sqrt(X2+Y2));  // here we type cast double into float
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        String set_of_direction = new String();
        set_of_direction = sc.nextLine();
        System.out.println(shortestPath(set_of_direction));

        sc.close();
    }
}
