// Example: 
// I/p = 
// Enter your plain text: All the best
// Enter the key: 1
// The encrypted text is: Bmm uif cfu

package TCS;

import java.util.Scanner;

public class ceaser {
    // public static void CustomerCaesarCipher(int key, String message){

    // }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter your plain text: ");
        String message = in.nextLine();
        int l = message.length();
        System.out.println("Enter the key: ");
        int key = in.nextInt();
        String res = "";
        int val = 0;

        for (int i = 0; i < l; i++) {

            val = message.charAt(i);

            if (val == 32) {
                val = 32;
            } else {
                val = val + key;
            }
            res = res + (char) val;

        }

        System.out.println(res);

    }

}
