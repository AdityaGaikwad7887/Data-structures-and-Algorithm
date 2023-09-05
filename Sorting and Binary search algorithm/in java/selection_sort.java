public class selection_sort {
    public static void selectionsort(int arr[]){
        for (int i = 0 ; i < arr.length ; i++){
            int s = i;
            // System.out.println("ok");
            for (int j = i+1 ; j < arr.length ; j++){
                if (arr[j] < arr[s]) {   // we just change condition at this point for decreasing order sorting 
                    s = j;
                }
                int temp = arr[s];
                arr[s] = arr[i];
                arr[i] = temp;
            }
        }
        for (int i = 0 ; i < arr.length ; i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String args[]){
        int arr[] = {6,8,4,5};
        selectionsort(arr);
    }
}
