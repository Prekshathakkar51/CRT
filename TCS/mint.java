

package TCS;

import java.util.Scanner;
public class mint {
    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        System.out.println("No of mints with 1st kid: ");
        int f = in.nextInt();

        System.out.println("Enter the length of queue: ");
        int l = in.nextInt();

        int sum = f;
        int prev;

        for(int i = 1; i<l; i++){
            prev = sum-1;
            sum = sum + prev; 
        }

        System.out.println(sum);

        
}
}
