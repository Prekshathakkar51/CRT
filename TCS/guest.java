package TCS;
import java.util.Scanner;
public class guest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the value of T: ");
        int t = in.nextInt();

        System.out.println("Enter the no of guests entering");
        int[] e = new int[t];

        int[] diff = new int[t];

        for(int i = 0; i<t; i++){
            e[i] = in.nextInt();
        }

        System.out.println("Enter the no of guests leaving");
        int[] l = new int[t];

        for(int i = 0; i<t; i++){
            l[i] = in.nextInt();
        }

        for(int i = 0; i<t; i++){
            diff[i] = e[i] - l[i];
        }

        int sum = 0;
        int max = diff[0];
        for(int i = 0; i<t;i++ ){
            sum = sum +diff[i];
            max = Math.max(sum,max);
        }

        System.out.println("No. of guests in the ship is: " + max);


    }
}