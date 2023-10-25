
public class InTerfaces {
    public static void main(String args[]){
        King k = new King();
        k.move();

        Queen q = new Queen();
        q.move();;

        Rook r = new Rook();
        r.move();


        System.out.println("\nInformation of Computer :: ");
        // Object for the multiple inherited class computer from Interface Hardware, Software, Design 
        Computer c = new Computer();
        c.Spckers();
        c.Driver_for_Spcker();
        c.Processor();
        c.OS();;
        c.Design_Type();

    }
}

// Interface 
interface ChessPlayer{
    void move();
}

class King implements ChessPlayer {
    public void move(){
        System.out.println("Left,Right,Up,Down, (Diagonal wise 1 block)");
    }
}

class Queen implements ChessPlayer {
    public void move(){
        System.out.println("Left,Right,Up,Down,Diagonal wise "+ "No limit of blocks ");
    }
}

class Rook implements ChessPlayer {
    public void move() {
        System.out.println("Left,Right,Up,Down");
    }
}


// interfaces for multiple inheritance 

interface Hardware {
    void Spckers();
    void Processor();

}

interface Softwaer {
    void Driver_for_Spcker();
    void OS();
}

interface Design {
    void Design_Type();
}

class Computer implements Hardware, Softwaer, Design {
    public void Spckers(){
        System.out.println("i-Balls");
    }
    public void Processor(){
        System.out.println("Intel i5 12gen");
    }
    public void Driver_for_Spcker(){
        System.out.println("Dolby Atoms");
    }
    public void OS(){
        System.out.println("Kali linux");
    }
    public void Design_Type(){
        System.out.println("Bulky");
    }
}

