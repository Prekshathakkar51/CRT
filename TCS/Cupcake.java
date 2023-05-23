package TCS;
import java.util.Scanner;
public class Cupcake {
    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        System.out.println("enter the no. of test cases: ");
        int t = in.nextInt();

        while(t>0){
            long n = in.nextLong();
            System.out.println((n / 2) + 1);
            t--;
        }     
}
}
