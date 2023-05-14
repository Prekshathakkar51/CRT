package TCS;
import java.util.Scanner;
import java.util.Arrays;

class chocolates {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number of inputs: ");
        int n = in.nextInt();
        System.out.println("Enter the elements: ");
        int choco[] = new int[n];

        for (int i = 0; i < n; i++) {
            // reading array elements from the user
            choco[i] = in.nextInt();
        }

        Arrays.sort(choco);

        System.out.println(choco[0]);

    }
}
