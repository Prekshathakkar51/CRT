// FInd the 15th term of the series
// 0,0,7,6,14,12,21,18,28
// odd term = +7   {0,7,14,21,28,35}
// even term = +6  {0,6,12,18,24,30}

package TCS;
import java.util.ArrayList;
import java.util.Scanner;

public class series {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();

        for (int i = 0; i < 9; i++) {
            arr.add(in.nextInt());
        }

        for (int i = 9; i < 16; i++) {
            if (i % 2 == 0) {
                int temp = arr.get(i - 2) + 7;
                arr.add(temp);
            } else {
                int temp = arr.get(i - 2) + 6;
                arr.add(temp);
            }
        }

        System.out.println(arr.get(14));
    }
}

        
        
   
