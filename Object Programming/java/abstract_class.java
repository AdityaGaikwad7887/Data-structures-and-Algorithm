
// abstract class 
abstract class Animal {

    String no_of_leg ;

    // constructor 
    Animal(){
        no_of_leg = "4";
    }

    // non-abstract methode 
    void look(){
        System.out.println("wild look");
    }

    abstract void color();   // abstract methode

}

class Monkey extends Animal {
    void leg(){
        no_of_leg = "2";
    }
    void color(){
        System.out.println("Brown");
    }
}

class Hours extends Animal {

    void color(){
        System.out.println("White");
    }
    static String hours_name  = "Mac";

}

class abstract_class {
    
    public static void main(String args[]){

        // Animal A = new Animal();   // This line gives error because abstract class have not object 
        Monkey m = new Monkey();
        m.color();
        m.leg();
        System.out.println(m.no_of_leg);
        
        Hours h = new Hours();
        h.color();;
        // h.leg();
        System.out.println(h.no_of_leg);
        System.out.println(Hours.hours_name);
    }
}
