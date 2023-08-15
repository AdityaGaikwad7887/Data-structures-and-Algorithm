
class array{
    public static int updatearray(int marks[]){
        for (int i = 0 ; i < marks.length ; i++ ){
            marks[i] = marks[i] + 1 ;
        }
        return 0;
    }
    public static void main(String agrs[]){
        // formate of array
        // int marks[] = new int[ 50 ] ;
        //                    size
        // marks = {1,2,3,4};  // this line throws error 
        
        int marks[] = {87,56,45,76}; // initilizing array fix array 
        
        updatearray(marks);

        for (int i = 0 ; i < marks.length ; i++ ){
            System.out.print(marks[i] + " ");
        }

    }
};


// Notes
/*
 * arrays are always passed through reference.
 */
