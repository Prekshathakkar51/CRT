
// x + y = 200
// 4x + 2y = 540 --> 2x + y = 540 --> x = (540 - y)/2 (4 wheelers)

package TCS;
import java.util.Scanner;
public class wheels {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter total num of vehicles(2 + 4 wheeler): ");
        int t = in.nextInt();

        System.out.println("Enter total num of wheels: ");
        int w = in.nextInt();

        int w4 = (w/2) - t;
        // (540/2) - 200
        int w2 = t - w4;
        // 200 - w4
        System.out.println("TW = " + w2);
        System.out.println("FW=" + w4);

}
}
