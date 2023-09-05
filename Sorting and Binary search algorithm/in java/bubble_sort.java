

public class bubble_sort {
    public static void bubblesort( int arr[]){
        for (int i = 0 ; i < arr.length-1 ; i++){
            for(int j = 0 ; j < arr.length-1-i ; j++){   // if we use arr.length-1 then our code checks all element sorted and not sorted 
                // System.out.println("shif"+j);
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        for(int i = 0 ; i < arr.length ; i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String args[]){
        int arr[] = {6,8,4,5};
        bubblesort(arr);

    }
}
