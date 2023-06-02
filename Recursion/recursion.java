package Recursion;

public class recursion {
    void fact(int fact){
        if(fact == 1){
            System.out.println(fact);
            return;
        }
        System.out.println(fact);
        fact(fact-1);
    }
    public static void main(String[] args) {
        recursion r = new recursion();
        r.fact(5); 
    }
}
