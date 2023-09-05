import java.util.*;

public class strings {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // char x[] = new char[5]; // this is a char array

        String a = "Aditya"; // this is simpal string
        String b = "Aditya";
        String name = new String("Aditya"); // String is class in java so (new) keyword is used to create new object

        // a = sc.next(); // .next() only takes one word as input\
        // System.out.println(a);

        // name = sc.nextLine(); // .nextLine() takes complite line as input
        // System.out.println(name);

        // // char at index in string
        // System.out.println( a.charAt(1) );

        // // length of string

        // System.out.println((a.length())); // String is a class in java so length() is
        // function not a proterty as array
        // System.out.println(x.length);

        // equals() function
        if (a.equals(b))
            System.out.println("Equal");
        else
            System.out.println("Not Equal");

        if (a.equals(name))
            System.out.println("Equal");
        else
            System.out.println("Not Equal");

        //// if we use == for comparing string then a == name is false because a is
        //// string but name is new string
        //// a == b return ture because a and b points same address

        // substring() function
        System.out.println(name.substring(2, 4));

        String s1 = "aditya";

        // compareTo() function --- small and capital letters are not equal
        if (name.compareTo(s1) > 0)
            System.out.println(" name > s1");
        else if (name.compareTo(s1) < 0)
            System.out.println(" name < s1");
        else
            System.out.println("name = s1");

        // compareToIgnoreCase() function --- small and capital letters are equal

        if (name.compareToIgnoreCase(s1) > 0)
            System.out.println(" name > s1");
        else if (name.compareToIgnoreCase(s1) < 0)
            System.out.println(" name < s1");
        else
            System.out.println("name = s1");
        sc.close();
    }
}

//